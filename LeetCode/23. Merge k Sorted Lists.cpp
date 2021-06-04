/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    struct compare
    {
        bool operator()(ListNode *&a, ListNode *&b)
        {
            return a->val > b->val;
        }
    };

    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *ans = new ListNode(-1);
        ListNode *head = ans;

        priority_queue<ListNode *, vector<ListNode *>, compare> minh;
        int n = lists.size();
        for (int i = 0; i < n; i++)
        {
            if (lists[i])
            {
                minh.push(lists[i]);
            }
        }

        while (!minh.empty())
        {
            auto x = minh.top();
            head->next = new ListNode(x->val);
            head = head->next;
            minh.pop();

            if (x->next)
                minh.push(x->next);
        }

        return ans->next;
    }
};