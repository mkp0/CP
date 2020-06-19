#include<bits/stdc++.h>

using namespace std;

struct node  // creating node
{
    int data;
    node* left;
    node* right;
};

node* root = NULL;

node* insert(int data) //inserting data
{
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void inorder(node* temp) //inorder transversal
{
    if(temp==NULL)
        return;

    inorder(temp->left);
    cout<<temp->data;
    inorder(temp->right);
    return;
}

int main()
{
    root = insert(1);
    root->left = insert(2);
    root->right = insert(3);
    inorder(root);

	return 0;
}
