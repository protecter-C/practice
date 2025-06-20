#include <stdio.h>
#include "doubly_linked_list.h"

int main() {

    DNode* list = createList();

    printf("앞 삽입 테스트\n");

    insertFront(&list, 10);
    insertFront(&list, 20);
    printForward(list);   

    printf("뒤 삽입 테스트\n");

    insertBack(&list, 30);
    insertBack(&list, 40);
    printForward(list);   

    printf("역순 출력 테스트\n");

    printBackward(list); 

    printf("앞 삭제 테스트\n");

    deleteFront(&list);
    printForward(list);   

    printf("뒤 삭제 테스트\n");

    deleteBack(&list);
    printForward(list);  

    printf("탐색 테스트: 30\n");

    DNode* found = search(list, 30);

    if (found) printf("찾음: %d\n", found->data);
    else printf("값 없음\n");

    printf("메모리 해제\n");
    freeList(list);

    return 0;

}

