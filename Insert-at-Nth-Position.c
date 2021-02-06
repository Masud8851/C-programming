#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* head;

void Insert(int data, int n)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    if(temp==1)
    {
        temp->next=head;
        head=temp;
    }
    struct node* temp1=head;
    int i;
    for(i=0; i<n-2; i++)
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;

}

void Print()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    head=NULL;
    Insert(4,1);
    Insert(9,2);
    Insert(4,1);
    Insert(9,2);
    Print();
}
