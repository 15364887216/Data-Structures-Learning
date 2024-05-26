// array.c
#include "array.h"
#include <stdio.h>

// ����һ�����������һ�����������������е�Ԫ������
static int array[MAX_SIZE];
static int size = 0;

// ��ʼ������
void initArray() {
    size = 0; // ��ʼʱ����Ϊ��
}

// ����Ԫ�ص�����
void insert(int element, int position) {
    if (position < 0 || position > size || size == MAX_SIZE) {
        printf("����λ����Ч����������\n");
        return;
    }
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }
    array[position] = element;
    size++;
}

// ��ӡ����
void printArray() {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// ��ȡ�����С
int getSize() {
    return size;
}
