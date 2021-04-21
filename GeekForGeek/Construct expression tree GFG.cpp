
/*struct et
{
	char value;
	et* left, *right;
};*/

//function to construct expression tree
et *DFS(char pf[], int &po)
{
    if (po < 0)
        return nullptr;
    et *ans = new et(pf[po]);
    po -= 1;
    if (ans->value < 'a' || ans->value > 'z')
    {

        ans->right = DFS(pf, po);
        ans->left = DFS(pf, po);
    }

    return ans;
}

et *constructTree(char postfix[])
{
    int co = 0;
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        co++;
    }
    co = co - 1;
    return DFS(postfix, co);
}