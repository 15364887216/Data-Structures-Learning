// stack.h
#ifndef STACK_H
#define STACK_H

#include "common.h" // ���� common.h ͷ�ļ�

// ����ջ�ڵ�
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// ջ������������
StackNode* createStackNode(int data);
void push(StackNode** top, int data);
int pop(StackNode** top);
int peek(StackNode* top);
bool isEmpty(StackNode* top);

#endif // STACK_H

