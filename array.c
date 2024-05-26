// array.c
#include "array.h"
#include <stdio.h>

// 声明一个整型数组和一个变量来跟踪数组中的元素数量
static int array[MAX_SIZE];
static int size = 0;

// 初始化数组
void initArray() {
    size = 0; // 初始时数组为空
}

// 插入元素到数组
void insert(int element, int position) {
    if (position < 0 || position > size || size == MAX_SIZE) {
        printf("插入位置无效或数组已满\n");
        return;
    }
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = element;
    size++;
}

// 打印数组
void printArray() {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// 获取数组大小
int getSize() {
    return size;
}
