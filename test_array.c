// test_array.c
#include "array.h"
#include <stdio.h>

int main() {
    initArray();
    insert(10, 0); // ��λ��0����Ԫ��10
    insert(20, 1); // ��λ��1����Ԫ��20
    insert(30, 2); // ��λ��2����Ԫ��30
    printf("�����е�Ԫ��: ");
    printArray();  // ��ӡ����
    printf("�����С: %d\n", getSize()); // ��ӡ�����С
    return 0;
}
