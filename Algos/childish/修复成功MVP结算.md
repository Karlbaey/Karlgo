---
title: 修复成功MVP结算
pubDate: 2025-02-08
tags: [胡言乱语]
slug: repair-success
---

卡尔白在搭建好博客之后，觉得 Hexo 提供的模板不合乎自己口味，就在 GitHub 找了个[喜欢的模板](https://github.com/ppoffice/hexo-theme-icarus "快点我！")。经历了九九八十一难终于把参数调对了，就在准备发布的时候，意外发生了：

突然之间，页面消失不见，**所有的**条目都不能访问。他对着机箱发怒了一刻钟，毫无效果后只能老老实实翻配置文件。这是修改前的代码块：

```yaml
# Alipay donate button configurations
    -
        # type: alipay
        # Alipay qrcode image URL
        # qrcode: ''
    # "Buy me a coffee" donate button configurations
    -
        # type: buymeacoffee
        # URL to the "Buy me a coffee" page
        # url: ''
    # Patreon donate button configurations
    -
        #type: patreon
        # URL to the Patreon page
        #url: ''
```

问题很明显了，其中的分隔符 `-` 没有被注释，但我还是排查了好久才发现原因QwQ。所以只要把这些 `-` 前加上 `#` 就解决问题了。

要是不这样的话，整个网站都会消失，该死的 yaml……

最后附上一张图，这是我修复成功的结算画面：

![修复成功](/images/RepairSuccess/RepairSuccess.png "RepairSuccess")
