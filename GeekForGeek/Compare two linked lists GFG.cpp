/* Linked list Node structure
struct Node
{
    char c;
    struct Node *next;
    
    Node(char x){
        c = x;
        next = NULL;
    }
    
};
*/

// Compare two strings represented as linked lists
int compare(Node *list1, Node *list2) 
{
    int ans = 0;
    while(list1 && list2)
    {
        if(list1->c > list2->c)
        {
            return 1;
        }
        if(list1->c < list2->c)
        {
            return -1;
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    
    return 0;
}