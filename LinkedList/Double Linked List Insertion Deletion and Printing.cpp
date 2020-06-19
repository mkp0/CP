#include<bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* pre;
};

Node* head =NULL;

void push(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->pre = NULL;
    temp->next = head;

    if(head==NULL)
        head = temp;
    else
    {
        head->pre = temp;
        head = temp;
    }
}

void print()
{
    Node* temp = head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void deleteion(Node* pos)
{
         if(pos==NULL)
            return;
         if(pos == head)
            head = head->next;
         if(pos->next!=NULL)
            pos->next->pre = pos->pre;
         if(pos->pre!=NULL)
            pos->pre->next = pos->next;
         free(pos);
         return;
}

int main()
{
    push(2);
    push(4);
    push(5);
    push(6);

    print();

    deleteion(head);
    deleteion(head->next);
    print();
    return 0;
}
