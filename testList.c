#include "linkedList.h"

int main() {
    Node* linkedList = createList(0);
    printList(linkedList);
    append(linkedList, 1);
    printList(linkedList);
    append(linkedList, 3);
    printList(linkedList);
    append(linkedList, 7);
    printList(linkedList);
    append(linkedList, 21);
    printList(linkedList);
    return 1;
}