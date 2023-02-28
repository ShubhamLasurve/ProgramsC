#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)     //To avoid padding
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       //Step 1 :Allocate memory

    newn->data = no;
    newn->next = NULL; 

    if(*First == NULL)          //If Linked List is empty
    {
        *First = newn;
    }
    else                        //If Linked List contain at least one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       //Step 1 :Allocate memory

    newn->data = no;
    newn->next = NULL; 

    if(*First == NULL)          //If Linked List is empty
    {
        *First = newn;
    }
    else                        //If Linked List contain at least one node
    {

    }
}

void Display(PNODE First)
{
    printf("Elements from the linked List are :\n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL\n");
}

int main()
{
    //struct node * Head = NULL;
    PNODE Head = NULL;

    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);

    Display(Head);
    
    return 0;
}