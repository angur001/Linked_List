#ifndef LINKED_LIST   /* Include guard */
#define LINKED_LIST

struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node Node;

Node* createList(const int value); // Creates a node with a value of 0 and no next node.
void append(Node *node,const int value); // Append a new node on the list with the specified value.
int pop(Node *node,const int value); // Returns the value of the last element and deletes it from the list.
void printList(Node *node); // Prints the list.
Node* getTail(Node *node); // Returns the last element on the list.


#endif // LINKED_LIST
