
#include <bits/stdc++.h>

class Solution
{
public:
    //Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        string num1;
        string num2;

        while (first)
        {
            num1 += to_string(first->data);
            first = first->next;
        }

        while (second)
        {
            num2 += to_string(second->data);
            second = second->next;
        }

        string su;
        int carry = 0;
        int n = num1.size();
        int m = num2.size();

        while (n && m)
        {
            int temp = (num1[n - 1] - '0') + (num2[m - 1] - '0') + carry;
            carry = temp / 10;
            su += to_string(temp % 10);
            n--, m--;
        }
        while (n)
        {
            int temp = (num1[n - 1] - '0') + carry;
            carry = temp / 10;
            su += to_string(temp % 10);
            n--;
        }
        while (m)
        {
            int temp = (num2[m - 1] - '0') + carry;
            carry = temp / 10;
            su += to_string(temp % 10);
            m--;
        }
        if (carry)
        {
            su += to_string(carry);
        }

        reverse(su.begin(), su.end());

        n = su.size();

        Node *ans = new Node(-1);
        Node *helper = ans;

        while (n)
        {
            helper->next = new Node(su[n - 1] - '0');
            helper = helper->next;
            n--;
        }

        ans = ans->next;
        Node *prev = nullptr;
        Node *cur = ans;
        Node *next;

        while (cur)
        {
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        ans = prev;

        return ans;
    }
};