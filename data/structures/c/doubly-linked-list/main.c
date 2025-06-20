#include <stdio.h>
#include "doubly_linked_list.h"

int main() {

    DNode* list = createList();

    printf("�� ���� �׽�Ʈ\n");

    insertFront(&list, 10);
    insertFront(&list, 20);
    printForward(list);   

    printf("�� ���� �׽�Ʈ\n");

    insertBack(&list, 30);
    insertBack(&list, 40);
    printForward(list);   

    printf("���� ��� �׽�Ʈ\n");

    printBackward(list); 

    printf("�� ���� �׽�Ʈ\n");

    deleteFront(&list);
    printForward(list);   

    printf("�� ���� �׽�Ʈ\n");

    deleteBack(&list);
    printForward(list);  

    printf("Ž�� �׽�Ʈ: 30\n");

    DNode* found = search(list, 30);

    if (found) printf("ã��: %d\n", found->data);
    else printf("�� ����\n");

    printf("�޸� ����\n");
    freeList(list);

    return 0;

}

