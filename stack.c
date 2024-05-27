// stack.c
#include "stack.h"
#include "common.h" // ���� common.h ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>

// ����һ���µ�ջ�ڵ�
StackNode* createStackNode(int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (newNode == NULL) {
        error("�ڴ����ʧ��"); // ʹ�� common.h �еĴ�������
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ��ջ
void push(StackNode** top, int data) {
    StackNode* newNode = createStackNode(data);
    newNode->next = *top;
    *top = newNode;
}

// ��ջ
int pop(StackNode** top) {
    if (isEmpty(*top)) {
        error("ջΪ�գ��޷���ջ");
        exit(EXIT_FAILURE);
    }
    StackNode* temp = *top;
    int poppedData = temp->data;
    *top = temp->next;
    free(temp);
    return poppedData;
}

// ��ȡջ��Ԫ��
int peek(StackNode* top) {
    if (isEmpty(top)) {
        error("ջΪ�գ��޷���ȡջ��Ԫ��");
        exit(EXIT_FAILURE);
    }
    return top->data;
}

// �ж�ջ�Ƿ�Ϊ��
bool isEmpty(StackNode* top) {
    return top == NULL;
}
