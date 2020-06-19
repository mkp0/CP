#include<Stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node* left;
struct node* right;
};

int height(struct node* tempr);
struct node* create(int data);
void preOrder(struct node* tempr);
void inOrder(struct node* tempr);
void postOrder(struct node* tempr);
void BFT(struct node* tempr);
void printGivenLevel(struct node* tempr,int height);

struct node* root = NULL;

struct node* create(int data)
{
     struct node* temp = malloc(sizeof(struct node));
     temp->left = NULL;
     temp->right = NULL;
     temp->data = data;

     return temp;
}

void inOrder(struct node* tempr)
{
    if(tempr==NULL)return;
    inOrder(tempr->left);

    printf("%d    ",tempr->data);

    inOrder(tempr->right);
}

void preOrder(struct node* tempr)
{
    if(tempr == NULL) return;
    printf("%d    ",tempr->data);

    preOrder(tempr->left);

    preOrder(tempr->right);

}

void postOrder(struct node* tempr)
{
    if(tempr == NULL) return;

    postOrder(tempr->left);

    postOrder(tempr->right);

    printf("%d    ",tempr->data);
}

int height(struct node* tempr)
{
    if(tempr==NULL)
            return 0;

    int lheight = height(tempr->left);
    int rheight = height(tempr->right);

    if(lheight>rheight)
        return lheight+1;
    else
        return rheight+1;
}
void BFT(struct node* tempr)
{
    int i;
    int Level = height(tempr);
    for(i = 1 ; i <= Level ; i++)
    {
        printGivenLevel(tempr,i);
    }
}
void printGivenLevel(struct node* tempr,int Level)
{
    if (tempr == NULL)
        return;
    if (Level == 1)
        printf("%d    ", tempr->data);
    else if (Level > 1)
    {
        printGivenLevel(tempr->left, Level-1);
        printGivenLevel(tempr->right, Level-1);
    }
}


int main()
{
    root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->left->right = create(5);
    printf("InOrder : ");
    inOrder(root);
    printf("\n");
    printf("Pre-Order : ");
    preOrder(root);
    printf("\n");
    printf("Post-Order : ");
    postOrder(root);
    printf("\n");
    printf("Height : ");
    printf("%d",height(root));
    printf("\n");
    printf("Breath First Transversal : ");
    BFT(root);

    return 0;
}
