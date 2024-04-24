#include<iostream>

struct list
{
    int data;
    struct list *next;
};

void append(struct list **ll, int num)
{
    struct list *temp;
    temp = *ll;

    if (*ll == NULL)
    {
        *ll = (struct list *)malloc(sizeof(struct list));
        temp = *ll;  
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = (struct list *)malloc(sizeof(struct list));
        temp = temp->next;   
    }

    temp->data = num;
    temp->next = NULL;   
}

void addAtBeg(struct list **ll, int num)
{
    struct list *temp;
    temp = (struct list *)malloc(sizeof(struct list));
    temp->data = num;
    temp->next = *ll;

    *ll = temp;
}

void deleteNode(struct list **ll, int num)
{
    struct list *temp, *old;
    temp = *ll;

    while(temp != NULL)
    {
        if(temp->data == num)
        {
            if (temp == *ll)  // Head Node
            {
                *ll = temp ->next;
                //temp = temp ->next;
            }
            else    // Intermediate Node
            {
                old->next = temp->next;              
            }
            free(temp);
            return;
        }
        else    // Traverse
        {
            old = temp;
            temp=temp->next;
        }
    }
}

void reverse(struct list **head)
{
    struct list *prev, *curr, *next;
    curr = *head;
    prev = NULL, next = NULL;

    while(curr != NULL)
    {
        next = curr->next;
        curr ->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
}


void display(struct list *ll)
{
    while (ll != NULL)
    {
        printf("\t%d ", ll->data);
        ll=ll->next;
    }    
}

struct list* reverseRecurse(struct list *head)
{
    if(head == NULL || head->next == NULL)
        return head;

    struct list *rest = reverseRecurse(head->next);
    head->next->next = head;
    head->next = NULL;

    return rest;
}

int main()
{
    struct list *ll;
    ll = NULL;

    append(&ll, 1);
    append(&ll, 2);
    append(&ll, 3);
    append(&ll, 4);
//    display(ll);

    printf("\n");
    addAtBeg(&ll, 99);
    addAtBeg(&ll, 88);
    display(ll);

    printf("\n");
    reverse(&ll);
    display(ll);

    printf("\n");
    ll = reverseRecurse(ll);
    display(ll);

    // printf("\n");
    // deleteNode(&ll, 4);
    // display(ll);
    
    // printf("\n");
    // deleteNode(&ll, 1);
    // display(ll);
    
    // printf("\n");
    // deleteNode(&ll, 88);
    // display(ll);
    return 0;
}