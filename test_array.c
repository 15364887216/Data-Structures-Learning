// test_array.c
#include "array.h"
#include <stdio.h>

int main() {
    initArray();
    insert(10, 0); // 在位置0插入元素10
    insert(20, 1); // 在位置1插入元素20
    insert(30, 2); // 在位置2插入元素30
    printf("数组中的元素: ");
    printArray();  // 打印数组
    printf("数组大小: %d\n", getSize()); // 打印数组大小
    return 0;
}
