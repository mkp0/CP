//Function to check whether a binary tree is foldable or not
bool is(Node* r1, Node* r2)
{
    if(!r1 && !r2)
    return true;
    
    if(!r1 || !r2)return false;
    
    return is(r1->left,r2->right)&& is(r1->right,r2->left);
}

bool IsFoldable(Node* root)
{
    if(!root)return true;
    
    return is(root->left,root->right);
}