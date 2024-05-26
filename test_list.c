#include "list.h"
#include <assert.h>
#include <stdio.h>

// ���Դ����ڵ�
void test_createNode() {
    Node* node = createNode(10);
    assert(node != NULL);
    assert(node->data == 10);
    assert(node->next == NULL);
    printf("���Դ����ڵ�ͨ����\n");
    free(node);
}

// ������ͷ������ڵ�
void test_insertAtHead() {
    Node* head = NULL;
    insertAtHead(&head, 10);
    assert(head != NULL);
    assert(head->data == 10);
    insertAtHead(&head, 20);
    assert(head->data == 20);
    assert(head->next->data == 10);
    printf("������ͷ������ڵ�ͨ����\n");
    freeList(&head);
}

// ������β������ڵ�
void test_insertAtTail() {
    Node* head = NULL;
    insertAtTail(&head, 10);
    assert(head != NULL);
    assert(head->data == 10);
    insertAtTail(&head, 20);
    assert(head->next != NULL);
    assert(head->next->data == 20);
    printf("������β������ڵ�ͨ����\n");
    freeList(&head);
}

// ����ɾ���ڵ�
void test_deleteNode() {
    Node* head = NULL;
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    deleteNode(&head, 10);
    assert(head->data == 20);
    assert(head->next == NULL);
    printf("����ɾ���ڵ�ͨ����\n");
    freeList(&head);
}

// �����������
void test_freeList() {
    Node* head = NULL;
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    freeList(&head);
    assert(head == NULL);
    printf("�����������ͨ����\n");
}

// ���������������в�������
int main() {
    test_createNode();
    test_insertAtHead();
    test_insertAtTail();
    test_deleteNode();
    test_freeList();

    printf("���в�������ͨ����\n");
    return 0;
}
