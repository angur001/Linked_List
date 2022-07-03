#include "linkedList.h"
#include <stdio.h>

int main() {
    Node *linkedList;
    linkedList = createList(14);
    printf("Create the list with the value 14 in the first node : ");
    printList(linkedList);
    append(linkedList, 10);
    printf("Append 10 to the list : ");
    printList(linkedList);
    append(linkedList, 3);
    printf("Append 3 to the list : ");
    printList(linkedList);
    append(linkedList, 7);
    printf("Append 7 to the list : ");
    printList(linkedList);
    append(linkedList, 21);
    printf("Append 21 to the list : ");
    printList(linkedList);
    pop(&linkedList);
    printf("Pop the last element of the list : ");
    printList(linkedList);
    pop(&linkedList);
    printf("Pop the last element of the list : ");
    printList(linkedList);
    pop(&linkedList);
    printf("Pop the last element of the list : ");
    printList(linkedList);
    pop(&linkedList);
    printf("Pop the last element of the list : ");
    printList(linkedList);
    printf("Last element in the list is : %d\n", peek(linkedList));
    pop(&linkedList);
    printf("Pop the last element of the list : ");
    //printf((linkedList == NULL) ? "it's null" : "it's not null");
    printList(linkedList);
    return 0;
}