// native approche
/*
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        map<Node *, Node *> m;

        Node *curr = head;

        while (curr)
        {
            m[curr] = new Node(curr->val);
            curr = curr->next;
        }

        curr = head;

        while (curr)
        {
            if (m[curr->next])
                m[curr]->next = m[curr->next];

            if (m[curr->random])
                m[curr]->random = m[curr->random];
            curr = curr->next;
        }

        return m[head];
    }
};

// optimal approche in O(1) space

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {

        Node *curr = head;

        while (curr)
        {
            Node *dummy = new Node(curr->val);
            dummy->next = curr->next;
            curr->next = dummy;
            curr = dummy->next;
        }

        // basically we are adding dummy node in between next and curr node and dummy's node next store the next element of head address

        curr = head;

        while (curr && curr->next)
        {
            if (curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        Node *ans = new Node(-1);
        Node *temp = ans;

        curr = head;
        while (curr && curr->next)
        {
            temp->next = curr->next;
            temp = temp->next;
            curr->next = curr->next->next;

            curr = curr->next;
        }

        return ans->next;
    }
};