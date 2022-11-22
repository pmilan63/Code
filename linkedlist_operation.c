#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int val;
    struct node *next;
};

int linkedlisttraversal(struct node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->val);
        ptr = ptr->next;
    }
}

//****************INSERT NODE AT BIGINING*************//
struct node *insertatbigining(struct node *head)
{
    int val2;
    printf("enter node value\n");
    scanf("%d", &val2);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->val = val2;
    ptr->next = head;
    head = ptr;
    return head;
}

//***************INSERT NODE AT END********************//
struct node *insertatend(struct node *head)
{
    int val;
    printf("enter node value\n");
    scanf("%d", &val);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = head;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = ptr;
    ptr->next = NULL;
    ptr->val = val;
    head = head2;
    return head;
}

//****************INSERT AFTER GIVEN VALUE***************//
struct node *insertaftergivenvalue(struct node *head)
{
    int val2, data;
    printf("enter a node value");
    scanf("%d", &val2);
    printf("enter a insert value");
    scanf("%d", &data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = head;
    while (head->next != NULL)
    {
        if (head->val == 52)
        {
            break;
        }

        head = head->next;
    }
    if (head->val == val2)
    {
        ptr->val = data;
        ptr->next = head->next;
        head->next = ptr;
        head = head2;
        return head;
    }
    else
    {
        printf("value not found");
    }
}
struct node *insertbeforegivenvalue(struct node *head)
{
    int val2, data;
    printf("enter a node value");
    scanf("%d", &val2);
    printf("enter a insert value");
    scanf("%d", &data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *prev;
    struct node *head2 = head;
    while (head->val != val2)
    {
        prev = head;
        // if (head->val == val2)
        // {
        //     break;
        // }
        head = head->next;
    }
    if (head->val == val2)
    {
        ptr->val = data;
        ptr->next = head;
        prev->next = ptr;
        head = head2;
        return head;
    }
    else
    {
        printf("value not found ");
    }
}
struct node *deleteforbigining(struct node *head)
{
    struct Node *ptr = head;
    // ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *deleteatend(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *prev;
    struct node *head2 = head;
    while (head->next != NULL)
    {
        prev = head;
        head = head->next;
    }
    if (head->next == NULL)
    {
        prev->next = NULL;
        free(head);
        head = head2;
    }
}
struct node *deletebeforegivennode(struct node *head)
{
    int val2;
    printf("enter a node value");
    scanf("%d", &val2);
    struct node *prev1;
    struct node *head2 = head;
    while (head->next->val != val2)
    {
        prev1 = head;
        head = head->next;
    }
    if (head->next->val == val2)
    {
        prev1->next = head->next;
        // head->next = prev1;
        free(head);
        head = head2;
        return head;
    }
}
struct node *deleteaftergivennode(struct node *head)
{
    int val2;
    printf("enter a node value");
    scanf("%d", &val2);
    struct node *head2 = head;
    struct node *prev;
    while (prev->val != val2)
    {
        prev = head;
        head = head->next;
    }
    if (prev->val == val2)
    {
        prev->next = head->next;
        free(head);
        head = head2;
        return head;
    }
}
struct node *deleteantirelist(struct node *head)
{
    int val2;
    printf("enter a node value");
    scanf("%d", &val2);
    struct node *prev;
    struct node *head2 = head;
    while (head->val != val2)
    {
        prev = head;
        // if (head->val == val2)
        // {
        //     break;
        // }
        head = head->next;
    }
    if (head->val == val2)
    {
        prev->next = head->next;
        // head->next = prev;
        free(head);
        head = head2;
        return head;
    }
    // else
    // {
    //     printf("value not found ");
    // }
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->val);
        ptr = ptr->next;
    }
}

int main()
{

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->val = 54;
    head->next = first;

    first->val = 73;
    first->next = second;

    second->val = 52;
    second->next = third;

    third->val = 34;
    third->next = fourth;

    fourth->val = 24;
    fourth->next = NULL;

    int choice;
    system("cls");
    printf("\n\n\tNAME:PATEL MILANKUMAR DIPAKBHAI    ENROLLMENT NO:210210116052");
    printf("\n\n\t-----------------SINGLY_LINKEDLIST_OPERATION-----------------");
    printf("\n<---MENU--->");
    printf("\nENTER APPROPRIATE NUMBER TO PERFORM FOLLOWING TASK");
    printf("\n1 : INSERT AT FIRST");
    printf("\n2 : INSERT AT END");
    printf("\n3 : INSERT AFTER GIVEN VALUE");
    printf("\n4 : INSERT BEFORE GIVEN VALUE");
    printf("\n5 : DELETE AT FIRST");
    printf("\n6 : DELETE AT END");
    printf("\n7 : DELETE BEFORE GIVEN NODE");
    printf("\n8 : DELETE AFTER GIVEN NODE");
    printf("\n9 : DELETE ANTIRE LIST");
    printf("\n10: DIPLAY");
    printf("\n11 : EXIT");
    printf("\n--------------------------------------");
    printf("\nENTER YOUR CHOICE:");
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            head = insertatbigining(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 2:
            insertatend(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 3:
            insertaftergivenvalue(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 4:
            insertbeforegivenvalue(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 5:
            head = deleteforbigining(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 6:
            deleteatend(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 7:
            deletebeforegivennode(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 8:
            deleteaftergivennode(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 9:
            deleteantirelist(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 10:
            display(head);
            printf("\n\n\t\tENTER YOUR NEEDED CHOICE:");
            break;
        case 11:
            exit(1);
            break;
        default:
            printf("INVALID CHOICE");
        }
    }

    // printf("before insertion\n");
    // linkedlisttraversal(head);
    // head=insertatbigining(head,42);
    // head = insertatend(head, 65);
    // head = insertaftergivenvalue(head, 43, 52);
    // head = insertbeforegivenvalue(head, 43, 52);
    // head = deleteforbigining(head);
    // head = deleteatend(head);
    // head=deletebeforegivennode(head,52);
    // head=deleteaftergivennode(head,52);
    // head = deleteantirelist(head, 52);

    // printf("after insertion\n");
    // linkedlisttraversal(head);

    return 0;
}
