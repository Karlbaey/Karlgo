---
title: RSS 入门教程
pubDate: 2025-03-29
draft: true
tags: [教程]
slug: rss-tutorial-for-karlblogs
---
## 开始 ——RSS 简介

RSS 是什么呢？

> **RSS**（英文全称：[RDF](https://zh.wikipedia.org/wiki/Resource_Description_Framework) Site Summary 或 Really Simple Syndication<sup>[[2](https://zh.wikipedia.org/wiki/RSS#cite_note-powers-2003-1-2)]</sup>，中文译作**简易资讯聚合**<sup>[[3](https://zh.wikipedia.org/wiki/RSS#cite_note-3)]</sup>，也称**聚合内容**<sup>[[4](https://zh.wikipedia.org/wiki/RSS#cite_note-张锐2015-4)]</sup>，是一种[消息来源](https://zh.wikipedia.org/wiki/消息來源)格式规范，用以聚合多个网站更新的内容并自动通知网站订阅者。使用 RSS 后，网站订阅者无需手动查看网站是否有新的内容，同时 RSS 能将多个网站的更新整合并以摘要形式呈现，有助于订阅者快速获取重要信息，并选择性点击查看。	*[——来自：维基百科-RSS](//w.wiki/FUk)*
>
> **消息来源**<sup>[[1](https://zh.wikipedia.org/wiki/消息來源#cite_note-1)]</sup>（英语：**web feed**、**news feed**、**syndicated feed**又译为**源料**<sup>[[2](https://zh.wikipedia.org/wiki/消息來源#cite_note-2)]</sup>、**馈送**<sup>[[3](https://zh.wikipedia.org/wiki/消息來源#cite_note-3)]</sup>、**资讯提供**<sup>[[4](https://zh.wikipedia.org/wiki/消息來源#cite_note-4)]</sup>、**供稿**<sup>[[5](https://zh.wikipedia.org/wiki/消息來源#cite_note-5)]</sup>、**摘要**、**源**<sup>[[6](https://zh.wikipedia.org/wiki/消息來源#cite_note-6)]</sup>、**新闻订阅**、**网源**<sup>[[7](https://zh.wikipedia.org/wiki/消息來源#cite_note-7)]</sup>）是一种[资料格式](https://zh.wikipedia.org/wiki/文件格式)，[网站](https://zh.wikipedia.org/wiki/網站)可透过它将最新资讯传播给用户，用户能够订阅网站的先决条件是网站可提供持续更新的资讯。消息来源受到[网志](https://zh.wikipedia.org/wiki/網誌)及[新闻](https://zh.wikipedia.org/wiki/新聞)网站的广泛采用，因为此类型的网站经常更新内容。如前所述，feed的译名很多，莫衷一是，至2008年底为止，还没有一个十分通用而备受认可的中文译名。将feed汇流于一处称为聚合（aggregation），而用于聚合的[软体](https://zh.wikipedia.org/wiki/軟體)称为[聚合器](https://zh.wikipedia.org/wiki/聚合器)（aggregator）。对终端使用者而言，聚合器是专门用来订阅网站的软体，一般亦称为[RSS阅读器](https://zh.wikipedia.org/wiki/RSS閱讀器)、feed 阅读器、新闻阅读器等。	 *[——来自：维基百科-消息来源](//w.wiki/Dcn8)*

那我们就知道了，RSS 本质就是一种推送机制，只不过这种机制完全把握在用户的手中，这样就避免了对算法的依赖。用户通过设置自己的 RSS 订阅源，就能阅读自己真正感兴趣的内容。

不过这对内容创作者来说相当不友好，因为 RSS 是一种“无流量访问”，创作者的流量相当于凭空消失。所以，现在 RSS 声势渐微，最主要的原因还是流量至上的时代，再其次就是 RSS 相对复杂的操作了。这也难怪，打破茧房总是要付出些代价的，不过是值得的。

> 事实上，一些 RSS 阅读器完全可以通过数据中转（提供 feed -> 阅读器服务提供商的服务器 -> 用户）使得本来被网络审查（也就是俗称的“墙”）的内容不通过搭载 VPN 等方式直接抵达用户手中。而常见的被墙的网站（例如 X、Facebook和维基百科）是提供 RSS 订阅的，因此，市面上常见的 RSS 阅读器大部分都已经被墙。这也是网络审查的一部分。
>
> 至今被墙的 Web 端 RSS 阅读器有：[Feedly](//feedly.com/)（2018.11）、[Inoreader](//inoreader.com)（2020.4）、[RssHub](//rsshub.app) 官方域名（2020.3），[Reeder](https://reederapp.com/)（2020.9，仅限 iOS）。

下面就以本站的 RSS 订阅源为例，简要介绍怎么订阅。

## 获取 feed

如果网站里有这个图案：<i class="fa-solid fa-rss"></i> ，就说明网站本身是提供 feed 的。点击这个图案，看看浏览器地址框，如果是以``atom.xml``结尾的话，那么这条网址就是这个网站的 feed；或者阅读页面中的介绍，通常都会在醒目处写出 feed 的地址。只要这个网站不被墙，你就可以在阅读器中使用它。

### 没有主动提供 feed 呢？

那你可以尝试在 RSSHub 寻找，[这里有很详细的使用方法](https://rsshub.netlify.app/zh/usage)。

## 使用 feed

通常来说，如果网站本身有 feed，那它通常是 ``example.com/atom.xml`` 这样的格式，只要把这个链接放在阅读器里即可。

我们以 Fluent Reader PC 版为例：

现在我们拿到了 Karlblogs 的 feed，也就是 [karlbaey.top/atom.xml](https://karlbaey.top/atom.xml)。现在需要下载一个 Fluent Reader，下载好后，打开并选择右上角的齿轮图案。[官网链接→](https://hyliu.me/fluent-reader/)

![在这里输入](/images/RSSTutorial/FluentReaderSettings.png)

把拿到的 feed 粘贴到输入框中，Fluent Reader 就会自动将读取到的文章显示在首页了。

但是，一些网站的正式 feed 是托管在 Google Feedburner 上的，无法在中国大陆访问，比如说[我的正式 feed](https://feeds.feedburner.com/karlfeed)。这种格式的 feed 如果按照上文的方法在 Fluent Reader 中使用，会提示 Error 403（禁止访问），因此需要在外国提供的服务器上解码才能正常访问，比如说 [Inoreader](//inoreader.com)，前文也提到，它们中的大多数已经被墙，想要用这种 feed 只能自建 RSS 服务。因为成本相对高就不在这里说明部署方法。

有没有只通过收电子邮件就能获得更新的方法呢？当然有的。

## follow 订阅

[这是官网](//follow.it)，目前本站也正在使用 follow 订阅，如果是 PC 端就看网页的左栏，有这样的一张图片：

![靠下的输入框](/images/RSSTutorial/Follow.png)

目前本站采用的 icarus amazing 模板内置了有关 follow 订阅的模块，所以是已经配置好 follow 订阅了，在这里输入你的邮箱并且在邮箱中查收并确认邮件就能订阅更新了。~~其实到现在都没有人订阅。~~

![示例](/images/RSSTutorial/followapi.png)

有一个和 follow 订阅功能类似的网站，也就是 [FeedBlitz](https://www.feedblitz.com/)，不过因为需要付费我并没有选用。

## 结语

其实 RSS 这档子事本来也就是早期互联网不仅网速慢而且上网也不方便，Netscape 适应环境而开发出来的一个小玩意，放在今天的互联网已经小巧到可以归类到 Gadgets 那一级别。它的没落是必然的，复兴也是必然的。

大数据的出现带动了算法、信息茧房等等诸多让人不适却又不得不沉浸其中的概念，一个普通人实在是很难抵挡这一切。就比如说微信公众号，虽然它本来也是像 RSS 一样，为了让每一个互联网用户都能看到自己真正感兴趣的东西。但是时代在发展，公众号也渐渐偏离了初衷，成了分析用户的工具。我们甚至可以试想，这些分析得到的数据会被拿去培养更精密的 AI，算法越来越完备，茧房越来越难逃脱，恶性循环早就已不可知的形式在整座互联网大厦里运行了起来。人真的只成了互联网运行的齿轮，成了冷冰冰的数据，而不是建设它的一份子。

RSS 摆在那里，就好像前朝的宝物重新焕发光彩，因此它必然复兴，当初只有新闻作用的它如今竟然成了生产力工具。或许 RSS 要给我们思考的，就是如何在信息的洪流下找到自己真正在意的东西。

当然，也包括不要忘了自己的初心。

*没想到一个小小的 RSS 也能让我写出这么些东西，可能我真的被算法预测太久太久了。*

***(The end)***
