int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);
  
int mergeSort(int arr[], int array_size)
{
    int* temp = (int*)malloc(sizeof(int) * array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
  
int _mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left) {
        mid = (right + left) / 2;
  
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
  
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}
  
int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inv_count = 0;
  
    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
  
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];
  
    while (j <= right)
        temp[k++] = arr[j++];
  
    for (i = left; i <= right; i++)
        arr[i] = temp[i];
  
    return inv_count;
}

int pt;
void inorder(Node* root,int ans[])
{
    if(!root)return;
    inorder(root->left,ans);
    ans[pt++] = root->data;
    inorder(root->right,ans);
}


int pairsViolatingBST(Node *root,int n){
    if(!root)return 0;
    pt = 0;
    int order[n+1];
    inorder(root,order);
    
    return mergeSort(order,n+1);
}