#include "linkedList.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

Node* createList(const int value) {
    Node *summit = (Node*)malloc(sizeof(Node));
    summit->value = value;
    summit->next = NULL;
    return summit;
}

Node* getTail(Node *node) {
    Node *ptr = node;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    return ptr;
}


void append(Node *node, const int value) {
    Node *ptr = getTail(node);
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = NULL;
    ptr->next = newNode;
}


int pop(Node *node, const int value) {
    Node *ptr = getTail(node);
    int res = ptr->value;
    free(ptr);
    ptr = NULL;
    return res;
}


void printList(Node *node) {
    Node *ptr = node;
    printf("[");
    while (ptr->next != NULL) {
        printf(" %d",ptr->value);
        ptr = ptr->next;
        printf(",");
    }
    printf(" %d",ptr->value);
    printf("]\n");
}

// TODO
void destroy(Node *node) {
    Node *ptr = node;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }


}