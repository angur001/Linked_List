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
int pop(Node **node); // Returns the value of the last element and deletes the last node .
int peek(Node *node); // returns the last element without deleting the last node.
void printList(Node *node); // Prints the list.
Node* getTail(Node *node); // Returns the last element on the list.
int getLenght(Node *node); // Returns the lenght of the list.



#endif // LINKED_LIST
