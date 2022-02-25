#include <stdio.h>
#include <stdlib.h>

typedef struct structureNode
{
    int data;
    struct structureNode *next;

} Node;

Node* head = NULL;

Node* createNode(int data)
{
    Node *node = malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void add(int data)
{
    Node *newNode = createNode(data);

    if (head == NULL)
        head = newNode;
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void print()
{
    if (head == NULL) return;

    Node *current = head;

    while(current->next != NULL)
    {
        printf("%d\t", current->data);
        current = current->next;
    }

    printf("%d\n", current->data);
}

void removeHead()
{
    if (head == NULL) return;
    Node* temp = head;
    head = head->next;
    free(temp);
}

int main()
{
    add(10); add(20); add(30);
    print();
    removeHead();
    print();
    return 1;
}