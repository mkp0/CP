
// Simple C++ program to find n'th node from end
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node
{
  int data;
  struct Node* next;
};

/* Function to get the nth node from the last of a linked list*/
void printNthFromLast(struct Node *head, int n)
{
  struct Node* mainp = head,*refp = head;
  int count = 0;
  while(count<n)
  {
      if(refp==NULL)
      {
          cout<<"ERROR LENGTH";
          return;
      }

      count++;
      refp = refp->next;
  }

  while(refp!=NULL)
  {
      count++;
      refp = refp->next;
      mainp = mainp->next;
  }

  cout<<mainp->data<<" "<<n;

}

void push(struct Node** head_ref, int new_data)
{
  /* allocate node */
  struct Node* new_node = new Node();

  /* put in the data  */
  new_node->data  = new_data;

  /* link the old list off the new node */
  new_node->next = (*head_ref);

  /* move the head to point to the new node */
  (*head_ref)    = new_node;
}

/* Drier program to test above function*/
int main()
{
  /* Start with the empty list */
  struct Node* head = NULL;
  push(&head, 20);
  push(&head, 4);
  push(&head, 15);
  push(&head, 35);

  printNthFromLast(head, 3);
}
