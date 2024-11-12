# CMake

CMake作为构建系统生成器（`generator`），主要**生成构建系统文件**。为例如Ninja这样的构建系统生成build.ninja

Ninja（`buildsystem`）是Google开发的**构建系统**。

CMake生成Ninja文件，当选择Ninja作为CMake的生成器时，CMake会生成名为build.ninja的文件，其中包含编译、链接等具体指令。然后Ninja使用这个build.ninja文件完成项目等实际构建过程。