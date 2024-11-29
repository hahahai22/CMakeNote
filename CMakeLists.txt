# 设置要求的cmake版本
cmake_minimum_required(VERSION 3.10)

# 设置项目名称和版本
project(Tutorial VERSION 1.0)

# 指定c++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 配置一个头文件以传递一些cmake设置到头文件
configure_file(TutorialConfig.h.in TutorialConfig.h)

# 使用add_subdirectory() 添加“MathFunctions”路径到项目
add_subdirectory(MathFunctions)

# 添加可执行文件Tutorial
add_executable(Tutorial tutorial.cxx)

# 使用target_link_libraries链接库到可执行文件
target_link_libraries(Tutorial PUBLIC MathFunctions)

# 添加目录结构（以二叉树的形式组织）到包含文件（include file）的搜说路径
# 为了可以找到： TutorialConfig.h
target_include_directories(Tutorial PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/MathFunctions"
                           )
