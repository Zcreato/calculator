# 🧮 简易命令行计算器（C 语言）

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

一个轻量级、模块化、结构规范的四则运算命令行计算器，采用标准 C 项目布局，使用 CMake 构建，适合学习 C 语言工程实践或作为小型工具使用。

## ✨ 特性

- ✅ 支持基本四则运算：`+`、`-`、`*`、`/`
- ✅ 完整的错误处理：除零检测、无效操作符提示
- ✅ 模块化设计：接口（`include/`）与实现（`src/`）分离
- ✅ 跨平台：可在 Linux、macOS、Windows（MinGW/MSYS2）上编译
- ✅ 零外部依赖：仅使用标准 C 库（`libc`）
- ✅ 使用 CMake 构建，支持现代开发流程

## 📂 项目结构
```text
calculator/
├── CMakeLists.txt      # 根 CMake 构建配置
├── README.md           # 本说明文件
├── LICENSE             # 许可证文件
├── include/
│   └── calc.h          # 公共接口头文件（函数声明）
└── src/
    ├── main.c          # 程序入口（用户交互）
    └── calc.c          # 核心计算逻辑实现
```
## 🛠️ 快速开始

### 系统要求
- **操作系统**：Linux / macOS / Windows (WSL 或 MinGW)
- **编译器**：GCC、Clang 或 MSVC（支持 C99）
- **构建工具**：CMake ≥ 3.10

> 💡 本项目**无需安装 GTK、Qt 或其他 GUI 库**，纯命令行运行。

### 构建步骤

```bash
# 1. 克隆或进入项目目录
git clone https://github.com/yourname/calculator.git  # 如果已托管
cd calculator

# 2. 创建独立构建目录（推荐）
mkdir build && cd build

# 3. 生成构建系统（默认使用 Makefile）
cmake ..

# 4. 编译项目
cmake --build .

# 或简写为：
# make