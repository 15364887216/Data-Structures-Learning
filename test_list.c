#include "list.h"
#include <assert.h>
#include <stdio.h>

// 测试创建节点
void test_createNode() {
    Node* node = createNode(10);
    assert(node != NULL);
    assert(node->data == 10);
    assert(node->next == NULL);
    printf("测试创建节点通过。\n");
    free(node);
}

// 测试在头部插入节点
void test_insertAtHead() {
    Node* head = NULL;
    insertAtHead(&head, 10);
    assert(head != NULL);
    assert(head->data == 10);
    insertAtHead(&head, 20);
    assert(head->data == 20);
    assert(head->next->data == 10);
    printf("测试在头部插入节点通过。\n");
    freeList(&head);
}

// 测试在尾部插入节点
void test_insertAtTail() {
    Node* head = NULL;
    insertAtTail(&head, 10);
    assert(head != NULL);
    assert(head->data == 10);
    insertAtTail(&head, 20);
    assert(head->next != NULL);
    assert(head->next->data == 20);
    printf("测试在尾部插入节点通过。\n");
    freeList(&head);
}

// 测试删除节点
void test_deleteNode() {
    Node* head = NULL;
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    deleteNode(&head, 10);
    assert(head->data == 20);
    assert(head->next == NULL);
    printf("测试删除节点通过。\n");
    freeList(&head);
}

// 测试清空链表
void test_freeList() {
    Node* head = NULL;
    insertAtHead(&head, 10);
    insertAtHead(&head, 20);
    freeList(&head);
    assert(head == NULL);
    printf("测试清空链表通过。\n");
}

// 主函数，运行所有测试用例
int main() {
    test_createNode();
    test_insertAtHead();
    test_insertAtTail();
    test_deleteNode();
    test_freeList();

    printf("所有测试用例通过。\n");
    return 0;
}
