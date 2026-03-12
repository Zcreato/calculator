# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(calculator C)

# 设置 C 标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# 启用编译警告（推荐）
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_C_COMPILER_ID MATCHES "Clang")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra")
endif()

# 添加 include 目录，使 #include "calc.h" 能找到
include_directories(include)

# 源文件列表
set(SOURCES
    src/main.c
    src/calc.c
    src/star.c
)

# 创建可执行文件
add_executable(calc ${SOURCES})

# 可选：安装规则
install(TARGETS calc DESTINATION bin)