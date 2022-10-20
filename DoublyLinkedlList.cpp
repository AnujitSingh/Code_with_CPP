#include <stdio.h>
#include <stdlib.h>
// structure for doubly linked list
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
// global variables
struct node *head = NULL;
struct node *tail = NULL;
int size = 0;
// function for inserting a node at beginning
void InsertAtBegin(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}
// function for inserting a node at end
void InsertAtEnd(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}
// function for inserting a node at position
void InsertAtPosition(int data, int position)
{
    if (position >= 0 && position <= size)
    {
        if (position == 0)
        {
            InsertAtBegin(data);
        }
        else if (position == size)
        {
            InsertAtEnd(data);
        }
        else
        {
            struct node *newNode = (struct node *)malloc(sizeof(struct
                                                                node));
            newNode->data = data;
            struct node *ptr = head;
            int i = 0;
            while (i < position)
            {
                ptr = ptr->next;
                i++;
            }
            newNode->next = ptr;
            newNode->prev = ptr->prev;
            ptr->prev->next = newNode;
            ptr->prev = newNode;
            size++;
        }
    }
    else
    {
        printf("Invalid position\n");
    }
}
// function for deleting a node at beginning
int DeleteAtBegin()
{
    if (head == NULL)
    {
        printf("List Underflow\n");
        return -1;
    }
    else
    {
        struct node *ptr = head;
        head = head->next;
        head->prev = NULL;
        int data = ptr->data;
        free(ptr);
        size--;
        return data;
    }
}
// function for deleting a node at end
int DeleteFromEnd()
{
    if (head == NULL)
    {
        printf("List Underflow\n");
        return -1;
    }
    else
    {
        struct node *ptr = tail;
        tail = tail->prev;
        tail->next = NULL;
        int data = ptr->data;
        free(ptr);
        size--;
        return data;
    }
}
// function for printing in reverse
void DisplayReversed()
{
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        printf("\nList in reverse order:-\nNULL");
        struct node *ptr = tail;
        while (ptr != NULL)
        {
            printf(" <--> |%d| ", ptr->data);
            ptr = ptr->prev;
        }
        printf("<--> NULL\n");
    }
}
// function for search an element
int Search(int data)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return -1;
    }
    else
    {
        struct node *ptr = head;
        int i = 0;
        while (ptr != NULL)
        {
            if (ptr->data == data)
            {
                return i;
            }
            ptr = ptr->next;
            i++;
        }
        return -1;
    }
}
// function for print the list
void Display()
{
    if (head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        printf("\nList is :-\nNULL ");
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf(" <--> |%d| ", ptr->data);
            ptr = ptr->next;
        }
        printf("<--> NULL\n");
    }
}
int main()
{
    int element;
    int choice = 0;
    int position;
    while (choice != 9)
    {
        printf("\n======================================== MENU========================================\n");
        printf("\n1- Insert at beginning");
        printf("\t\t\t2- Insert at end");
        printf("\t\t\t3- Insert at position");
        printf("\n4- Delete from beginning");
        printf("\t5- Delete from end");
        printf("\t\t\t 6- Print in Reverse Order");
        printf("\n7- Search an Element");
        printf("\t\t8- Display");
        printf("\t\t\t\t 9- Exit");
        printf("\n=======================================================================================\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted: ");
            scanf("%d", &element);
            InsertAtBegin(element);
            Display();
            break;
        case 2:
            printf("Enter the element to be inserted: ");
            scanf("%d", &element);
            InsertAtEnd(element);
            Display();
            break;
        case 3:
            printf("Enter the element to be inserted: ");
            scanf("%d", &element);
            printf("Enter the position: ");
            scanf("%d", &position);
            InsertAtPosition(element, position);
            Display();
            break;
        case 4:
            printf("Deleted element is: %d\n", DeleteAtBegin());
            Display();
            break;
        case 5:
            printf("Deleted element is: %d\n", DeleteFromEnd());
            Display();
            break;
        case 6:
            DisplayReversed();
            break;
        case 7:
            printf("Enter the element to be searched: ");
            scanf("%d", &element);
            if (Search(element) == -1)
            {
                printf("Element not found\n");
            }
            else
            {
                printf("Element found at position: %d\n", Search(element) + 1);
            }
            break;
        case 8:
            Display();
            break;
        case 9:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!!!\n");
        }
    }
}