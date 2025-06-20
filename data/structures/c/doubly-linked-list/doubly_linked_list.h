#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

typedef struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
} DNode;


DNode* createList();

void insertFront(DNode** head, int data);
void insertBack(DNode** head, int data);
void deleteFront(DNode** head);
void deleteBack(DNode** head);

DNode* search(DNode* head, int target);

void printForward(DNode* head);
void printBackward(DNode* head);
void freeList(DNode* head);

#endif