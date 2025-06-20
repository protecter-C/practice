#include <stdio.h>
#include "linked_list.h"

int main() {
    Node* list = createList();

    printf("���� �׽�Ʈ (��)\n");
    insertFront(&list, 10);
    insertFront(&list, 20);
    printList(list); 

    printf("���� �׽�Ʈ (��)\n");
    insertBack(&list, 30);
    insertBack(&list, 40);
    printList(list);  

    printf("���� �׽�Ʈ (��)\n");
    deleteFront(&list);
    printList(list); 

    printf("���� �׽�Ʈ (��)\n");
    deleteBack(&list);
    printList(list); 

    printf("Ž�� �׽�Ʈ: 30\n");
    Node* found = search(list, 30);
    if (found) printf("ã��: %d\n", found->data);
    else printf("���� ã�� �� ����\n");

    printf("�޸� ����\n");
    freeList(list);

    return 0;
}