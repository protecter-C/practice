#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node* createList() {
    return NULL;
}

void insertFront(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) return;
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertBack(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) return;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        Node* temp = *head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
}

void deleteFront(Node** head) {
    if (*head == NULL) return;
    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteBack(Node** head) {
    if (*head == NULL) return;
    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }

    Node* temp = *head;
    while (temp->next->next) temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}

Node* search(Node* head, int target) {
    while (head) {
        if (head->data == target) return head;
        head = head->next;
    }
    return NULL;
}

void printList(Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(Node* head) {
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        free(temp);
    }
}