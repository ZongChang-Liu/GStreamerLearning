# GStreamer Learning and Practice Repository

----

## 📑 Table of Contents

- [📖 Introduction](#-introduction)
- [🗂️ Repository Structure](#-repository-structure)
- [🚀 Development Environment Setup](#-development-environment-setup)
- [🔧 Development Toolchain](#-development-toolchain)
- [📚 Learning Resources](#-learning-resources)
- [⚠️ Notes and Disclaimer](#-notes-and-disclaimer)
- [🤝 Contributions and Feedback](#-contributions-and-feedback)
- [📜 License](#-license)

----

## 📖 Introduction

This is a learning and research repository focused on the **GStreamer** multimedia framework, containing personal study notes, code examples, and practical projects.

The repository will be continuously updated and improved as my learning progresses. Click to jump to the changelog to view the latest content. - [Changelog](./CHANGELOG.md)

This repository is mainly conducted in Chinese. The English version is updated late and the translation is not accurate enough. It is recommended to follow the Chinese version.

----

## 🗂️ Repository Structure

```text
GStreamerDemo/
├── 🖼️ assets/                 # Image and resource files
├── 📁 docs/                   # Study notes and documentation
│   ├── 📁 advanced/           # Advanced topics
│   ├── 📁 basics/             # Basic concepts
├── 💻 examples/               # Code examples
│   ├── 📁 advanced_examples/  # Advanced examples
│   ├── 📁 basic_examples/     # Basic examples
├── 🚀 projects/               # Point to actual projects
├── 📚 resources/              # Learning resources and references
├── 📝 .gitignore              # Git ignore file
├── ⚖️ LICENSE                 # License file
├── 📋 CHANGELOG.md            # Changelog
├── 🌐 README.md               # Repository overview and instructions
└── 🇨🇳 README_zh-CN.md         # Chinese repository overview
```

----

## 🚀 Development Environment Setup

### 🛠️ Main Development Tools

| Tool Name          | Version          | Description                                 |
|--------------------|------------------|---------------------------------------------|
| CLion              | Latest Version   | Cross-platform C/C++ Development            |
| Visual Studio Code | Latest Version   | Cross-platform Code Editing & Debugging     |
| CMake              | 3.25 and above   | Cross-platform Build System                 |
| Git                | Latest Version   | Version Control & Collaborative Development |
| VMware Workstation | Latest Version   | Virtualization Environment Setup & Testing  |
| Homebrew           | Latest Version   | macOS Package Management Tool               |
| Qt                 | 5.15.2 and above | Cross-platform GUI Development Framework    |
| Qt for macOS       | 6.6.3 and above  | macOS-specific Qt Version                   |

### 💻 Hardware Devices

I primarily use the following devices for development and testing:

#### 💼 Laptop Devices
| Model              | Processor  | Memory | Graphics Card            | Usage & Positioning                                                          |
|--------------------|------------|--------|--------------------------|------------------------------------------------------------------------------|
| MacBook Pro 2024   | M4 Pro     | 48GB   | 36-core GPU              | Main Mac Development · Video Editing · Daily Office                          |
| Surface Pro 9      | i7-1255U   | 32GB   | Intel® Iris® Xe Graphics | Performance Tuning · Touchscreen Compatibility · Business Trips and Meetings |
| ThinkBook 16P Gen5 | i9-14900HX | 32GB   | NVIDIA RTX 4060          | Business Trip Testing                                                        |

#### 🖥️ Desktop Hosts
| Model           | Processor | Memory | Graphics Card   | Usage & Positioning                                                         |
|-----------------|-----------|--------|-----------------|-----------------------------------------------------------------------------|
| Workstation     | i9-13900K | 128GB  | NVIDIA RTX 4090 | Main Windows Development · Audio/Video Development · Personal Entertainment |
| Lenovo P3 tower | i7-13700  | 64GB   | NVIDIA RTX 4070 | Main Linux Development · Server Application Testing · Deployment Testing    |
| Mac mini 2024   | M4 Pro    | 24GB   | 16-core GPU     | macOS Service Deployment · Continuous Integration · Lightweight Development |

#### ⚙️ Servers
| Model                 | Processor         | Memory | Graphics Card    | Usage & Positioning                                                               |
|-----------------------|-------------------|--------|------------------|-----------------------------------------------------------------------------------|
| Lenovo P920           | 2x Xeon Gold 8168 | 256GB  | NVIDIA RTX A6000 | Deep Learning Training · Large-scale Multimedia Processing · Scientific Computing |
| Cloud Server (aliyun) | 2 vCPU            | 2GB    | None             | Cloud Service Deployment · Test Environment · Lightweight Application Hosting     |

### 🌐 Operating System Configuration

#### 🍎 macOS
- Devices: MacBook Pro, Mac mini
- System Version: macOS Tahoe 26 and above
- Package Management: Homebrew

#### 🪟 Windows
- Devices: Surface Pro 9, ThinkBook 16P Gen5, Workstation
- System Version: Windows 11 Pro 24H2 and above

#### 🐧 Linux
- Devices: Cloud Server, VMware Virtual Machine, Lenovo P920
- Desktop System Version: Ubuntu 24.04 LTS and above
- Server System Version: Ubuntu 22.04 LTS and above

----

## 🔧 Development Toolchain

### ⚙️ Compilers
| Platform   | Compiler Name | Version        |
|------------|---------------|----------------|
| 🍎 macOS   | Apple Clang   | latest         |
| 🪟 Windows | MSVC          | VS2017, latest |
| 🐧 Linux   | GCC           | latest         |

### 🛠️ Build Systems
- CMake 3.25 and above
- Ninja (optional)

### 📊 Version Control
- Git Latest Version

### 📦 Package Management Tools
- 🍎 macOS: Homebrew
- 🐧 Linux: apt-get

----

## 📚 Learning Resources

### 📘 Official Resources

* [GStreamer Official Documentation](https://gstreamer.freedesktop.org/documentation/)

* [GStreamer Application Development Manual](https://gstreamer.freedesktop.org/documentation/application-development/)

* [Plugin Writing Guide](https://gstreamer.freedesktop.org/documentation/plugin-development/)

### 📚 Books & Tutorials

* *GStreamer Application Development* (Official recommendation)

----

## ⚠️ Notes and Disclaimer

### 🚨 Important Declarations

1. Not for Production Use - All code in this repository is for learning examples, not fully tested or optimized, and should not be used in production environments.

2. Liability Limitation - The author is not responsible for any direct or indirect consequences arising from the use of this repository's code.

3. Knowledge Risk - Multimedia processing involves complex systems; misuse may lead to resource exhaustion, system instability, and other issues.

### 📋 Usage Guidelines

1. Comply with Laws and Regulations - Please ensure compliance with local copyright laws, privacy laws, and other regulations during use.

2. Respect Intellectual Property - Do not use this code to process unauthorized copyrighted content.

3. Security Considerations - Network streaming examples may involve external resources; please be mindful of network security.

4. System Resources - Multimedia processing consumes significant CPU, GPU, and memory resources; please use responsibly.

### 🔍 Quality Statement

* The code may contain errors or imperfections.

* API usage may not represent best practices.

* Some examples may be outdated (GStreamer API changes over time).

* Compatibility is limited to the tested environment configurations.

----

## 🤝 Contributions and Feedback

If you find any issues or have suggestions for improvement:

* Submit a new Issue: Clearly describe the problem and reproduction steps.

* Contact via email: zongchang.smile@gmail.com

----

## 📜 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

----

**👨‍💻 Maintainer: Zongchang Liu (zongchang.smile@gmail.com)**

**🎯 Goal: To help developers better understand and master the GStreamer multimedia framework**

**💖 Thanks: All contributors and users for their support**

*Happy learning and smooth coding!* 🎬 🔊