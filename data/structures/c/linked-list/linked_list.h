#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* createList();

void insertFront(Node** head, int data);
void insertBack(Node** head, int data);
void deleteFront(Node** head);
void deleteBack(Node** head);
Node* search(Node* head, int target);
void printList(Node* head);
void freeList(Node* head);

#endif