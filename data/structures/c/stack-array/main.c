#include <stdio.h>
#include "stack_array.h"

int main() {

    Stack* stack = createStack();

    printf("Push 테스트\n");
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Peek: %d\n", peek(stack));  

    printf("Pop: %d\n", pop(stack));   
    printf("Pop: %d\n", pop(stack));    

    printf("Peek: %d\n", peek(stack));

    printf("비어 있음? %s\n", isEmpty(stack) ? "예" : "아니오");  // 아니오

    pop(stack);  
    printf("비어 있음? %s\n", isEmpty(stack) ? "예" : "아니오");  // 예

    
    pop(stack);  
    peek(stack);

    freeStack(stack);

    return 0;
}