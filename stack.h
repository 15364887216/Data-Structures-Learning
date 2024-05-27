// stack.h
#ifndef STACK_H
#define STACK_H

#include "common.h" // 包含 common.h 头文件

// 定义栈节点
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// 栈操作函数声明
StackNode* createStackNode(int data);
void push(StackNode** top, int data);
int pop(StackNode** top);
int peek(StackNode* top);
bool isEmpty(StackNode* top);

#endif // STACK_H

