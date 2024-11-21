# 构建系统生成器及构建系统

CMake作为**构建系统生成器**（`buildsystem generator`），主要"生成构建系统文件"。为例如Ninja这样的构建系统生成build.ninja

Ninja（`buildsystem`）是Google开发的**构建系统**。

> 简单理解就是构建系统生成器，生成构建系统文件。

CMake生成Ninja文件，当选择Ninja作为CMake的生成器时，CMake会生成名为build.ninja的文件，其中包含编译、链接等具体指令。然后Ninja使用这个build.ninja文件完成项目等实际构建过程。

1. 使用`-G`选项覆盖默认生成器（generator）
   ```shell
   cmake .. -G "Ninja"  # 生成项目文件
   ```
2. 构建项目
   ```shell
   make
   ```

# CMake使用
## 设置C++版本

避免使用默认C++编译器进行编译，导致的不可控因素，以及移植中存在的不兼容性问题。即，如果代码中使用了C++11新特性，而默认编译器是老版本编译器，则会导致编译报错；如果进行移植，则会出现不可控问题（由于编译器版本导致的）。

显示的在CMake代码中声明（state）正确的标志（flags）

这是一种方法，使用`CMAKE_CXX_STANDAND`变量
```CMake
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
```

## 设置项目版本号

使用命令`project()`设置项目名称及版本号
```CMake
project(CMAKE_STURY VERSION 1.0)
```

## 生成配置头文件

使用`configure_file()`生成配置文件，例如在例子中，通过`TutorialConfig.h.in`生成配置文件`TutorialConfig.h`文件
```CMake
configure_file(TutorialConfig.h.in TutorialConfig.h)
```

## 指定可执行目标应该在哪里寻找包含文件

使用`target_include_directories()`
```CMake
target_include_diretories(tutorial PUBLIC ${CMAKE_BINARY_DIR}$)
```
这里对`PUBLIC`和`PRIVATE`说明：

## execute
