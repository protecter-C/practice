#include <stdio.h>
#include <stdlib.h>
#include "stack_array.h"


Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (!stack) return NULL;
    stack->top = -1;
    return stack;
}


void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("������ ���� á���ϴ�.\n");
        return;
    }
    stack->data[++(stack->top)] = value;
}


int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("������ ��� �ֽ��ϴ�.\n");
        return -1;
    }
    return stack->data[(stack->top)--];
}


int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("������ ��� �ֽ��ϴ�.\n");
        return -1;
    }
    return stack->data[stack->top];
}


int isEmpty(Stack* stack) {
    return stack->top == -1;
}


int isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}


void freeStack(Stack* stack) {
    free(stack);
}

