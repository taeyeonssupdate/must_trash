#include <stdio.h>
#include <stdlib.h>

struct node
{
    int number;
    struct node *next;
};
struct node *head, *current, *save;

void printList(struct node *p);
struct node *createList(int[], int);
void combineList(struct node *, struct node *);

int main(void)
{

    int arr1[] = {12, 43, 56, 34, 98};
    int arr2[] = {36, 77, 99};

    struct node *a1 = createList(arr1, sizeof(arr1) / 4);
    struct node *a2 = createList(arr2, sizeof(arr2) / 4);

    combineList(a1, a2);
    printList(a1);

    return 0;
}

struct node *createList(int data[], int size)
{
    ;
    for (int i = 0; i < size; i++)
    {
        current = (struct node *)malloc(sizeof(struct node));
        current->number = data[i];
        if (i == 0)
        {
            head = current;
        }
        else
        {
            save->next = current;
        }
        current->next = NULL;
        save = current;
    }
    return head;
}

void combineList(struct node *first1, struct node *first2)
{

    while (first1->next != NULL)
    {
        first1 = first1->next;
    }
    first1->next = first2;
}

void printList(struct node *p)
{

    while (p != NULL)
    {
        printf("%d ", p->number);
        p = p->next;
    }
}