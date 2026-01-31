# GStreamer 学习与实践仓库

----

## 📑 目录

- [📖 简介](#-简介)
- [🗂️ 仓库结构](#-仓库结构)
- [🚀 开发环境配置](#-开发环境配置)
- [🔧 开发工具链](#-开发工具链)
- [📚 学习资源推荐](#-学习资源推荐)
- [⚠️ 注意事项与免责声明](#-注意事项与免责声明)
- [🤝 贡献与反馈](#-贡献与反馈)
- [📜 许可证](#-许可证)

----

## 📖 简介

这是一个专注**GStreamer**多媒体框架的学习与研究仓库，包含个人学习笔记、代码示例和实战项目。

仓库会随着个人学习的深入不断更新和完善。 点里可以跳转到更新日志查看最新内容。- [更新日志](./CHANGELOG.md)

该项目主要以中文为主，英文版本更新存在滞后，并且翻译不够准确，建议以中文版本为准。

----

## 🗂️ 仓库结构

```text
GStreamerDemo/
├── 🖼️ assets/                 # 图片等资源文件
├── 🗂️ docs/                   # 学习笔记和文档
│   ├── 🗂️ advanced/           # 高级主题
│   ├── 🗂️ basics/             # 基础知识
├── 💻 examples/               # 代码示例
│   ├── 🗂️ advanced_examples/  # 高级示例
│   ├── 🗂️ basic_examples/     # 基础示例
├── 🚀 projects/               # 指向实际的项目
├── 📚 resources/              # 学习资源和参考资料
├── 📝 .gitignore              # Git 忽略文件
├── ⚖️ LSICENSE                # License 文件
├── 📋 CHANGELOG.md            # 更新日志
├── 🌐 README.md               # Repository overview and instructions
└── 🇨🇳 README_zh-CN.md         # 仓库概览和使用说明
```

----

## 🚀 开发环境配置

### 🛠️ 主要开发工具

| 工具名称               | 版本          | 用途说明        |
|--------------------|-------------|-------------|
| CLion              | 最新版本        | 跨平台C/C++开发  |
| Visual Studio Code | 最新版本        | 跨平台代码编辑与调试  |
| CMake              | 3.25及以上版本   | 跨平台构建系统     |
| Git                | 最新版本        | 版本控制与协作开发   |
| VMware Workstation | 最新版本        | 虚拟化环境搭建与测试  |
| Homebrew           | 最新版本        | macOS包管理工具  |
| Qt                 | 5.15.2及以上版本 | 跨平台GUI开发框架  |
| Qt for mac         | 6.6.3及以上版本  | macOS专用Qt版本 |

### 💻 硬件设备

本人主要使用以下设备进行开发和测试

#### 💼 笔记本设备
| 型号规格                | 处理器        | 内存   | 显卡                       | 用途定位                  |
|---------------------|------------|------|--------------------------|-----------------------|
| 	MacBook Pro 2024   | M4 Pro     | 48GB | 36核GPU                   | Mac主力开发 · 视频剪辑 · 日常办公 |
| 	Surface Pro 9      | i7-1255U   | 32GB | Intel® Iris® Xe Graphics | 性能调优 · 触屏兼容 · 出差会议    |
| 	ThinkBook 16P Gen5 | i9-14900HX | 32GB | NVIDIA  RTX 4060         | 出差测试                  |

#### 🖥️ 桌面主机
| 型号规格            | 处理器       | 内存    | 显卡               | 用途定位                       |
|-----------------|-----------|-------|------------------|----------------------------|
| 	工作站	           | i9-13900K | 128GB | NVIDIA  RTX 4090 | Windos主力开发 · 音视频开发 · 个人娱乐  |
| Lenovo P3 tower | 13700     | 64GB  | NVIDIA RTX4070   | Linux主力开发 · 服务器应用测试 · 部署测试 |
| Mac mini 2024	  | M4 Pro    | 24GB  | 16核GPU           | macOS服务部署 · 持续集成 · 轻量级开发   |

#### ⚙️服务器
| 型号规格         | 处理器               | 内存    | 显卡               | 用途定位                     |
|--------------|-------------------|-------|------------------|--------------------------|
| Lenovo P920  | 2x Xeon Gold 8168 | 256GB | NVIDIA RTX A6000 | 深度学习训练 · 大规模多媒体处理 · 科学计算 |
| 云服务器（aliyun) | 2 vCPU            | 2 G   | 无                | 云端服务部署 · 测试环境 · 轻量级应用托管  |

### 🌐 操作系统配置

#### 🍎 macOS
- 设备: MacBook Pro, Mac mini
- 系统版本:macOS Tahoe 26 及以上版本
- 包管理:Homebrew 包管理器

#### 🪟 Windows
- 设备: Surface Pro 9, ThinkBook 16P Gen5, 工作站
- 系统版本:Windows 11 Pro 24H2 及以上版本

#### 🐧 Linux
- 设备: 云服务器, VMware 虚拟机, Lenovo P920
- 桌面系统版本: Ubuntu 24.04 LTS 及以上版本
- 服务器系统版本: Ubuntu 22.04 LTS 及以上版本

----

## 🔧 开发工具链

### ⚙️ 编译器
| 平台         | 编译器名称       | 版本              |
|------------|-------------|-----------------|
| 🍎 macOS   | Apple Clang | latest          |
| 🪟 Windows | MSVC        | VS2017 , latest |
| 🐧 Linux   | GCC         | latest          |

### 🛠️ 构建系统
- CMake 3.25及以上版本
- Ninja (可选)

### 📊版 本控制
- Git 最新版本

### 📦 包管理工具
- 🍎 macOS: Homebrew
- 🐧 Linux: apt-get

----

## 📚 学习资源推荐

### 📘 官方资源

* [GStreamer官方文档](https://gstreamer.freedesktop.org/documentation/)

* [GStreamer应用开发手册](https://gstreamer.freedesktop.org/documentation/application-development/)

* [插件编写指南](https://gstreamer.freedesktop.org/documentation/plugin-development/)

### 📚 书籍与教程

* *GStreamer Application Development* (官方推荐)

* [GStreamer 中文教程](https://blog.csdn.net/zyazky/category_5823105.html) (第三方教程)

----

## ⚠️ 注意事项与免责声明

### 🚨 重要声明

1. 非生产环境使用 - 本仓库所有代码均为学习示例，未经充分测试和优化，不应用于生产环境

2. 责任限制 - 作者不对因使用本仓库代码而产生的任何直接或间接后果负责

3. 知识风险 - 多媒体处理涉及复杂系统，错误使用可能导致资源耗尽、系统不稳定等问题

### 📋 使用规范

1. 遵守法律法规 - 请确保在使用过程中遵守当地版权法、隐私法等法律法规

2. 尊重知识产权 - 不要使用本代码处理未经授权的受版权保护内容

3. 安全考虑 - 网络流媒体示例可能涉及外部资源，请注意网络安全

4. 系统资源 - 多媒体处理对CPU、GPU、内存资源消耗较大，请合理使用

### 🔍 质量说明

* 代码可能存在错误或不完善之处

* API使用方式可能不是最优实践

* 部分示例可能已过时（GStreamer API会随时间变化）

* 兼容性仅限于测试时的环境配置

----

## 🤝 贡献与反馈

如果你发现任何问题或有改进建议：

* 提交新的 Issue: 清晰描述问题和复现步骤

* 通过邮箱联系: zongchang.smile@gmail.com

----

## 📜 许可证

本项目采用**MIT 许可证** - 详情请参阅 [LICENSE](LICENSE) 文件。

----

**👨‍💻 维护者: Zongchang Liu (zongchang.smile@gmail.com)**

**🎯 目标: 帮助开发者更好地理解和掌握 GStreamer 多媒体框架**

**💖 感谢: 所有贡献者和使用者的支持**

*学习愉快，编码顺利！* 🎬 🔊