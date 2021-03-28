void insertWord(TrieNode *root, string key, int l, int k)
{
    if (l == k)
    {
        root->isLeaf = true;
        return;
    }

    if (!root->children[key[k] - 'a'])
    {
        root->children[key[k] - 'a'] = getNode();
    }
    insertWord(root->children[key[k] - 'a'], key, l, k + 1);
}

void insert(struct TrieNode *root, string key)
{
    insertWord(root, key, key.size(), 0);
}

// root : root node of the trie
// key : string to search in the trie
// Returns true if key presents in trie, else false

bool searchWord(TrieNode *root, string key, int l, int p)
{
    if (l == p)
    {
        return root->isLeaf;
    }
    if (!root->children[key[p] - 'a'])
    {
        return false;
    }
    return searchWord(root->children[key[p] - 'a'], key, l, p + 1);
}

bool search(struct TrieNode *root, string key)
{
    return searchWord(root, key, key.size(), 0);
}