// ==UserScript==
// @name         NodeSeek Ctrl+Enter Submit
// @name:zh-CN   NodeSeek Ctrl+Enter 发帖
// @namespace    https://www.nodeseek.com/
// @version      1.4.0
// @description  Submit a NodeSeek reply with a customizable shortcut when the editor is focused.
// @description:zh-CN 当光标在 NodeSeek 回复编辑框内时，用自定义快捷键发布回复。
// @author       Karlbaey
// @match        https://www.nodeseek.com/post-*
// @match        https://nodeseek.com/post-*
// @icon         https://www.nodeseek.com/static/image/favicon/android-chrome-192x192.png
// @grant        none
// @run-at       document-idle
// @license      agpl-3.0
// ==/UserScript==

(function () {
    'use strict';

    const STORE = 'nodeseek.ctrl-enter-submit.shortcut';
    const EDITOR = '#editor-body';
    const SUBMIT = 'button.submit.btn,button.submit,.submit.btn';
    const SUBMIT_TEXT = /发布评论|发布回复|回复|评论|提交|发送|post|reply|submit|send/i;
    const MODS = ['ctrlKey', 'shiftKey', 'altKey', 'metaKey'];
    const MOD_NAMES = { ctrlKey: 'Ctrl', shiftKey: 'Shift', altKey: 'Alt', metaKey: 'Meta' };
    const MOD_ONLY = /^(Control|Shift|Alt|Meta|OS)$/;
    const DEFAULT = { key: 'Enter', code: 'Enter', ctrlKey: true, shiftKey: false, altKey: false, metaKey: false };

    const $ = (selector, root = document) => root.querySelector(selector);
    const pressedKey = (event) => event.key === ' ' || event.code === 'Space' ? 'Space' : event.key || event.code || '';

    let shortcut = loadShortcut();
    let draft = shortcut;
    let locked = false;
    let hotspot;
    let panel;
    let gear;
    let capture;
    let status;

    function clean(value) {
        const next = {
            key: String(value && value.key || ''),
            code: String(value && value.code || ''),
            ctrlKey: Boolean(value && value.ctrlKey),
            shiftKey: Boolean(value && value.shiftKey),
            altKey: Boolean(value && value.altKey),
            metaKey: Boolean(value && value.metaKey)
        };

        return next.key && !MOD_ONLY.test(next.key) && MODS.some((name) => next[name]) ? next : null;
    }

    function loadShortcut() {
        try {
            return clean(JSON.parse(localStorage.getItem(STORE))) || DEFAULT;
        } catch (_) {
            return DEFAULT;
        }
    }

    function saveShortcut(value) {
        shortcut = clean(value) || DEFAULT;
        draft = shortcut;
        localStorage.setItem(STORE, JSON.stringify(shortcut));
        render('已保存');
    }

    function shortcutFromEvent(event) {
        return clean({
            key: pressedKey(event),
            code: event.code || '',
            ctrlKey: event.ctrlKey,
            shiftKey: event.shiftKey,
            altKey: event.altKey,
            metaKey: event.metaKey
        });
    }

    function shortcutMatches(event) {
        return !event.isComposing
            && MODS.every((name) => event[name] === shortcut[name])
            && ((shortcut.code && event.code === shortcut.code) || pressedKey(event).toLowerCase() === shortcut.key.toLowerCase());
    }

    function label(value) {
        const key = value.key.length === 1 ? value.key.toUpperCase() : value.key;
        return MODS.filter((name) => value[name]).map((name) => MOD_NAMES[name]).concat(key).join(' + ');
    }

    function getEditor(event) {
        const target = event.target instanceof Element ? event.target : null;
        const active = document.activeElement instanceof Element ? document.activeElement : null;

        return target && target.closest(EDITOR)
            || active && active.closest(EDITOR)
            || $('#editor-body .CodeMirror-focused,#editor-body .cm-focused') && $(EDITOR)
            || null;
    }

    function getSubmitButton(editor) {
        const buttons = [editor, document].filter(Boolean)
            .flatMap((root) => Array.from(root.querySelectorAll(SUBMIT)))
            .filter((button) => !button.disabled);

        return buttons.find((button) => button.textContent.trim() === '发布评论')
            || buttons.find((button) => SUBMIT_TEXT.test(button.textContent))
            || buttons[0]
            || null;
    }

    function submit(editor) {
        if (locked) return;

        const button = getSubmitButton(editor);
        if (!button) {
            console.warn('[NodeSeek Shortcut Submit] 未找到发布按钮。');
            return;
        }

        locked = true;
        button.click();
        setTimeout(() => {
            locked = false;
        }, 1200);
    }

    function render(message) {
        if (!capture) return;
        capture.textContent = label(draft);
        status.textContent = message || `当前：${label(shortcut)}`;
    }

    function setPanel(open) {
        hotspot.classList.toggle('open', open);
        panel.classList.toggle('open', open);
        gear.setAttribute('aria-expanded', String(open));

        if (open) {
            draft = shortcut;
            render();
            capture.focus();
        }
    }

    function installUi() {
        const style = document.createElement('style');
        style.textContent = `
#ns-ces-hot{position:fixed;top:0;left:0;width:64px;height:64px;z-index:2147483646}
#ns-ces-gear{position:absolute;top:12px;left:12px;width:36px;height:36px;border:1px solid #ffffff3d;border-radius:8px;background:#212529e0;box-shadow:0 8px 24px #0003;color:#fff;cursor:pointer;font:18px/1 system-ui;opacity:0;pointer-events:none;transform:translateY(-6px);transition:.16s}
#ns-ces-hot:hover #ns-ces-gear,#ns-ces-hot:focus-within #ns-ces-gear,#ns-ces-hot.open #ns-ces-gear{opacity:1;pointer-events:auto;transform:none}
#ns-ces-panel{display:none;position:fixed;top:56px;left:12px;width:260px;max-width:calc(100vw - 24px);z-index:2147483646;box-sizing:border-box;padding:14px;border:1px solid #0f17242e;border-radius:8px;background:#fff;box-shadow:0 18px 48px #0f172438;color:#1f2937;font:14px/1.45 system-ui,-apple-system,BlinkMacSystemFont,"Segoe UI",sans-serif}
#ns-ces-panel.open{display:block}#ns-ces-panel *{box-sizing:border-box}.ns-ces-head{display:flex;align-items:center;justify-content:space-between;margin-bottom:12px}.ns-ces-head h2{margin:0;font-size:14px}.ns-ces-x{width:28px;height:28px;border:0;border-radius:6px;background:transparent;color:#4b5563;cursor:pointer;font:18px/1 system-ui}
#ns-ces-capture{width:100%;min-height:38px;margin-top:6px;padding:8px 10px;border:1px solid #d1d5db;border-radius:8px;background:#f9fafb;color:#111827;cursor:pointer;font:600 14px/1.2 ui-monospace,SFMono-Regular,Menlo,Consolas,monospace}
#ns-ces-status{min-height:18px;margin:8px 0 12px;color:#6b7280;font-size:12px}.ns-ces-actions{display:flex;gap:8px;justify-content:flex-end}.ns-ces-actions button{padding:8px 10px;border:1px solid #d1d5db;border-radius:7px;background:#fff;color:#374151;cursor:pointer;font:13px/1 system-ui}.ns-ces-actions [data-save]{border-color:#2563eb;background:#2563eb;color:#fff}`;

        hotspot = document.createElement('div');
        hotspot.id = 'ns-ces-hot';
        hotspot.innerHTML = '<button id="ns-ces-gear" type="button" title="发帖快捷键" aria-label="发帖快捷键设置" aria-expanded="false">⚙</button>';

        panel = document.createElement('section');
        panel.id = 'ns-ces-panel';
        panel.innerHTML = `
<div class="ns-ces-head"><h2>发帖快捷键</h2><button class="ns-ces-x" type="button" aria-label="关闭">×</button></div>
<label for="ns-ces-capture">快捷键</label>
<button id="ns-ces-capture" type="button"></button>
<div id="ns-ces-status" aria-live="polite"></div>
<div class="ns-ces-actions"><button type="button" data-reset>重置</button><button type="button" data-save>保存</button></div>`;

        document.documentElement.appendChild(style);
        document.body.append(hotspot, panel);

        gear = $('#ns-ces-gear');
        capture = $('#ns-ces-capture');
        status = $('#ns-ces-status');

        gear.onclick = () => setPanel(!panel.classList.contains('open'));
        $('.ns-ces-x', panel).onclick = () => setPanel(false);
        $('[data-reset]', panel).onclick = () => saveShortcut(DEFAULT);
        $('[data-save]', panel).onclick = () => saveShortcut(draft);
        capture.onclick = () => {
            capture.focus();
            render('按下新的组合键');
        };
        capture.onkeydown = (event) => {
            event.preventDefault();
            event.stopPropagation();

            const next = shortcutFromEvent(event);
            if (!next) {
                render('需要至少一个修饰键');
                return;
            }

            draft = next;
            render('待保存');
        };

        document.addEventListener('keydown', (event) => {
            if (event.key === 'Escape' && panel.classList.contains('open')) setPanel(false);
        });
        document.addEventListener('click', (event) => {
            if (panel.classList.contains('open') && !panel.contains(event.target) && !hotspot.contains(event.target)) {
                setPanel(false);
            }
        });

        render();
    }

    installUi();

    document.addEventListener('keydown', (event) => {
        if (!shortcutMatches(event)) return;

        const editor = getEditor(event);
        if (!editor) return;

        event.preventDefault();
        event.stopPropagation();
        submit(editor);
    }, true);
})();
