#include <stdio.h>
#include "stack_array.h"

int main() {

    Stack* stack = createStack();

    printf("Push �׽�Ʈ\n");
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Peek: %d\n", peek(stack));  

    printf("Pop: %d\n", pop(stack));   
    printf("Pop: %d\n", pop(stack));    

    printf("Peek: %d\n", peek(stack));

    printf("��� ����? %s\n", isEmpty(stack) ? "��" : "�ƴϿ�");  // �ƴϿ�

    pop(stack);  
    printf("��� ����? %s\n", isEmpty(stack) ? "��" : "�ƴϿ�");  // ��

    
    pop(stack);  
    peek(stack);

    freeStack(stack);

    return 0;
}