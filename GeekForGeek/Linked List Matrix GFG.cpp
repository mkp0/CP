Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    Node* root = new Node(mat[0][0]);
    Node* temp = root;
    Node* temp1 = root;
    Node* temp2 = root;
    for(int i = 1 ; i < n ;i++)
    {
        temp1->down = new Node(mat[i][0]);
        temp2->right = new Node(mat[0][i]);
        temp1 = temp1->down;
        temp2 = temp2->right;
    }
    temp = root;
    temp1 = root;
    temp2 = root;
    for(int i = 1 ; i < n ;i++)
    {
        temp1 = temp->down;
        temp2 = temp->right;
        for(int j = 1 ; j < n ;j++)
        {
            temp2->down = new Node(mat[i][j]);
            temp1->right = new Node(mat[i][j]);
            temp2 = temp2->right;
            temp1 = temp1->right;
        }
        
        temp = temp->down;
    }
    return root;
}