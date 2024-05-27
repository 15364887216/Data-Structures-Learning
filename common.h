// common.h
#ifndef COMMON_H
#define COMMON_H

/* 包含标准输入输出库 */
#include <stdio.h>
/* 包含标准库，例如 malloc 和 free */
#include <stdlib.h>
/* 包含布尔类型定义 */
#include <stdbool.h>

/* 如果需要，可以在这里添加更多的库 */

/* 宏定义 */
#define MAX_SIZE 100  // 定义最大尺寸或其他相关常量

/* 通用工具函数声明 */
// 例如，错误处理函数
void error(const char* message);

#endif // COMMON_H
