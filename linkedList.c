#include "linkedList.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

//TODO : pop case 1 problem

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


int pop(Node **node) {
    Node **ptr = node;
    int res;
    while (((*ptr)->next) != NULL) {
        ptr = &((*ptr)->next);
    }
    res = (*ptr)->value;
    free((*ptr));
    (*ptr) = NULL;
    return res;
}

int getLenght(Node *node) {
    Node *ptr = node;
    if (ptr == NULL) {
        return 0;
    }
    int lenght = 1;
    while (ptr->next != NULL) {
        ptr = ptr->next;
        lenght++;
    }
    return lenght;
}


void printList(Node *node) {
    Node *ptr = node;
    if (ptr == NULL) {
        printf("([], %d)", getLenght(node));
        return;
    }
    printf("([");
    while (ptr->next != NULL) {
        printf("%d ",ptr->value);
        ptr = ptr->next;
        printf(",");
    }
    printf(" %d",ptr->value);
    printf("], %d)\n", getLenght(node));
}


// TODO
void destroy(Node *node) {
    Node *ptr = node;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

}

int peek(Node *node) {
    return getTail(node)->value;
}