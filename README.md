# 数据结构学习项目

## 项目介绍
这个项目是一个C语言实现的基本数据结构库，包括链表、栈、队列、树和图等。它旨在为学习和实践数据结构提供一个实用的参考。

## 项目结构

- `src/` 目录包含所有数据结构的源代码文件（`.c`）和头文件（`.h`）。
- `include/` 目录包含所有公共头文件，如宏定义和通用函数声明。
- `tests/` 目录包含针对每种数据结构的测试代码。
- `examples/` 目录包含示例程序，展示如何使用这些数据结构。
- `README.md` 是项目的文档文件，其中包含项目说明、如何构建和运行项目等信息。
- `Makefile` 是用于编译项目的脚本。

data-structures-project/

|-- src/


|   |-- main.c             // 主程序入口

|   |-- array.c            // 数组实现

|   |-- list.c             // 链表实现

|   |-- stack.c            // 栈实现

|   |-- queue.c            // 队列实现

|   |-- tree.c             // 树实现

|   |-- graph.c            // 图实现

|   |-- sort.c             // 排序算法实现

|   |-- search.c           // 查找算法实现

|-- include/

|   |-- array.h            // 数组头文件

|   |-- list.h             // 链表头文件

|   |-- stack.h            // 栈头文件

|   |-- queue.h            // 队列头文件

|   |-- tree.h             // 树头文件

|   |-- graph.h            // 图头文件

|   |-- sort.h             // 排序算法头文件

|   |-- search.h           // 查找算法头文件

|   |-- common.h           // 公共头文件，包含常用库和宏定义

|-- tests/

|   |-- test_array.c       // 数组测试

|   |-- test_list.c        // 链表测试

|   |-- test_stack.c       // 栈测试

|   |-- test_queue.c       // 队列测试

|   |-- test_tree.c        // 树测试

|   |-- test_graph.c       // 图测试

|   |-- test_sort.c        // 排序算法测试

|   |-- test_search.c      // 查找算法测试

|-- examples/

|   |-- example_usage.c    // 示例程序，展示如何使用数据结构

|-- docs/

|   |-- README.md          // 项目文档

|-- Makefile               // 编译脚本




## 如何构建
使用Makefile来构建项目：

## 运行测试
运行以下命令来执行所有测试：


## 示例程序
查看 `examples/` 目录下的 `example_usage.c` 来了解如何使用这些数据结构。

## 贡献
如果你有任何改进意见或想要贡献代码，请随时提交 pull request 或开 issue。

## 许可证
本项目采用 MIT License。
