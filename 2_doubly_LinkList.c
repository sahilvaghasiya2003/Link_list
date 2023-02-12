#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};

void display(struct Node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
        i++;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 10;
    head->next = second;

    second->prev = head->next;
    second->data = 20;
    second->next = third;

    third->prev = second->next;
    third->data = 30;
    third->next = fourth;

    fourth->prev = third->next;
    fourth->data = 40;
    fourth->next = NULL;

    display(head);
}