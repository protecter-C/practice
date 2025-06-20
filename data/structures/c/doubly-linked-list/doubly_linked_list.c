#include <stdio.h>
#include <stdlib.h>
#include "doubly_linked_list.h"


DNode* createList() {
    return NULL;
}


void insertFront(DNode** head, int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    if (!newNode) return;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}


void insertBack(DNode** head, int data) {
    DNode* newNode = (DNode*)malloc(sizeof(DNode));
    if (!newNode) return;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    DNode* temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

void deleteFront(DNode** head) {
    if (*head == NULL) return;

    DNode* temp = *head;
    *head = (*head)->next;
    if (*head)
        (*head)->prev = NULL;

    free(temp);
}

void deleteBack(DNode** head) {
    if (*head == NULL) return;

    DNode* temp = *head;
    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);
}

DNode* search(DNode* head, int target) {
    while (head) {
        if (head->data == target) return head;
        head = head->next;
    }
    return NULL;
}

void printForward(DNode* head) {
    while (head) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void printBackward(DNode* head) {
    if (!head) return;
    while (head->next)
        head = head->next;
    while (head) {
        printf("%d <-> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
}

void freeList(DNode* head) {
    DNode* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }

}