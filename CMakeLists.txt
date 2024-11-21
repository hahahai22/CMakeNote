cmake_minimum_required(VERSION 3.10)
project(CMAKE_STURY VERSION 1.0)

# 使用configure_file()生成配置文件
configure_file(TutorialConfig.h.in TutorialConfig.h)

# 设置C++11标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 生成目标文件tutorial
add_executable(tutorial src/tutorial.cxx)

# 将生成的配置文件所在目录添加到 include 路径，为目标tutorial指定头文件
target_include_directories(tutorial PRIVATE ${CMAKE_BINARY_DIR})