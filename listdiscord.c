#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *newNode(int data)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void print(Node *head)
{
    printf("Printing\t");
    Node *current = head;
    if (current == NULL)
        printf("List is emtpy");
    while (current != NULL)
    {
        printf("%d\t", current->data);
        current = current->next;
    }
    printf("\n");
}

void addHead(Node **head, int data)
{
    Node *n = newNode(data);
    n->next = *head;

    *head = n;
}

void removeHead(Node **head)
{
    if (head != NULL)
    {
        Node *temp = (*head)->next;
        free(*head);
        *head = temp;
    }
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;

    addHead(&head1, 20); addHead(&head2, 10);
    print(head1);

    removeHead(&head1);
    print(head1);

    removeHead(&head2);
    print(head2);

    return 0;
}