#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H
#define MAX_SIZE 100 

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

Stack* createStack();

void push(Stack* stack, int value);
int pop(Stack* stack);
int peek(Stack* stack);
int isEmpty(Stack* stack);
int isFull(Stack* stack);
void freeStack(Stack* stack);

#endif