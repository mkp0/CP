//Tree Creation and Traversal

//Three types :-
// i) inorder(left,root,right)
//ii) preorder(root,left,right)
//iii) postorder(left,right,root)
//Immlementation
//            1
//          /   \
//        2       3
//       / \     / \
//      4   5   6   7
//inorder : -  4,2,5,1,6,3,7 
//preorder : -  1,2,4,5,3,6,7
//postorder : -  4,5,2,6,7,3,1

#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

//creating root
node *root = NULL;

void inorder(node *temproot)
{
    if (temproot == NULL)
    {
        return;
    }
    
    inorder(temproot->left);
    cout << temproot->data << " ";
    inorder(temproot->right);
}

void preorder(node *temproot)
{
    if (temproot == NULL)
    {
        return;
    }
    
    cout << temproot->data << " ";
    preorder(temproot->left);
    preorder(temproot->right);
}

void postorder(node *temproot)
{
    if (temproot == NULL)
    {
        return;
    }
    
    postorder(temproot->left);
    postorder(temproot->right);
    cout << temproot->data << " ";
}

node *insert(int val)
{
    node *temp = new node();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int main()
{
    root = insert(1);
    root->left = insert(2);
    root->right = insert(3);
    root->left->left = insert(4);
    root->left->right = insert(5);
    root->right->left = insert(6);
    root->right->right = insert(7);

    //Printing part

    //Inorder Transversal
    cout << "InOrder : - \t";
    inorder(root);
    cout << endl;

    //preorder Transversal
    cout << "PreOrder : - \t";
    preorder(root);
    cout << endl;

    //postorder Transversal
    cout << "PostOrder : - \t";
    postorder(root);
    cout << endl;

    return 0;
}