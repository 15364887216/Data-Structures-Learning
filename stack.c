// stack.c
#include "stack.h"
#include "common.h" // 包含 common.h 头文件
#include <stdio.h>
#include <stdlib.h>

// 创建一个新的栈节点
StackNode* createStackNode(int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (newNode == NULL) {
        error("内存分配失败"); // 使用 common.h 中的错误处理函数
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 入栈
void push(StackNode** top, int data) {
    StackNode* newNode = createStackNode(data);
    newNode->next = *top;
    *top = newNode;
}

// 出栈
int pop(StackNode** top) {
    if (isEmpty(*top)) {
        error("栈为空，无法出栈");
        exit(EXIT_FAILURE);
    }
    StackNode* temp = *top;
    int poppedData = temp->data;
    *top = temp->next;
    free(temp);
    return poppedData;
}

// 获取栈顶元素
int peek(StackNode* top) {
    if (isEmpty(top)) {
        error("栈为空，无法获取栈顶元素");
        exit(EXIT_FAILURE);
    }
    return top->data;
}

// 判断栈是否为空
bool isEmpty(StackNode* top) {
    return top == NULL;
}
