#ifndef LIST_H
#define LIST_H

typedef struct Node Node;

// ��������ڵ�
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void insertAtHead(Node** head, int data);
void insertAtTail(Node** head, int data);
void printList(Node* head);
void deleteNode(Node** head, int key);
void freeList(Node** head);

#endif // LIST_H
