#include <stdio.h>
#include "linked_list.h"

int main() {
    Node* list = createList();

    printf("삽입 테스트 (앞)\n");
    insertFront(&list, 10);
    insertFront(&list, 20);
    printList(list); 

    printf("삽입 테스트 (뒤)\n");
    insertBack(&list, 30);
    insertBack(&list, 40);
    printList(list);  

    printf("삭제 테스트 (앞)\n");
    deleteFront(&list);
    printList(list); 

    printf("삭제 테스트 (뒤)\n");
    deleteBack(&list);
    printList(list); 

    printf("탐색 테스트: 30\n");
    Node* found = search(list, 30);
    if (found) printf("찾음: %d\n", found->data);
    else printf("값을 찾을 수 없음\n");

    printf("메모리 해제\n");
    freeList(list);

    return 0;
}