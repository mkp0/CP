//Level Order Transveral
//Immlementation
//            1
//          /   \
//        2       3
//       / \     / \
//      4   5   6   7
//levelOrder :-  1,2,3,4,5,6,7....
#include <bits/stdc++.h>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};

//Creating Roots
node *root = NULL;

//inserting data into nodes
node *insert(int val)
{
    node *temp = new node();
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

//Getting height of tree
int heightOfTree(node *tempRoot)
{
    if (tempRoot == NULL)
        return 0;

    int lheight = heightOfTree(tempRoot->left);
    int rheight = heightOfTree(tempRoot->left);

    if (lheight > rheight)
        return lheight + 1;
    else
    {
        return rheight + 1;
    }
}

// printing tree in Level ORDER
void printing(node* tempRoot,int level)
{
    if(level==1)
    {
        cout << tempRoot->data << " ";
        return;
    }
    printing(tempRoot->left, level - 1);
    printing(tempRoot->right, level - 1);
}

//Level order utility function
void LOT(node *tempRoot)
{
    if(tempRoot==NULL)
        return;
    int height = heightOfTree(tempRoot);

    for (int i = 1; i <= height; i++)
    {
        printing(tempRoot, i);
        cout << endl;
    }
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

    //Level Order Transversal
    LOT(root);

    return 0;
}