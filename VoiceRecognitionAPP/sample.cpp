#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *root = NULL;

node *putdata(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void inorder(node *temp)
{
    if (temp == NULL)
        return;
    else
    {
        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }
}

void preorder(node *temp)
{
    if (temp == NULL)
        return;
    else
    {
        cout << temp->data << " ";
        inorder(temp->left);
        inorder(temp->right);
    }
}

void postorder(node *temp)
{
    if (temp == NULL)
        return;
    else
    {
        inorder(temp->left);
        inorder(temp->right);
        cout << temp->data << " ";
    }
}

int main()
{
    root = putdata(1);
    root->left = putdata(2);
    root->right = putdata(3);
    root->left->left = putdata(4);
    cout << endl;
    root->left->right = putdata(5);
    cout << endl;
    root->right->left = putdata(6);
    cout << endl;
    root->right->right = putdata(7);

    //INORDER PRINT
    inorder(root);
    cout << endl;

    //PREORDER PRINT
    preorder(root);
    cout << endl;


    //POSTORDER PRINT
    postorder(root);
    cout << endl;


    return 0;
}