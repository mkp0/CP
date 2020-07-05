//Stack implenentation
//Array implenentation
//[1,2,3,4,5,6]
#include <bits/stdc++.h>

const int MAX = 5;

using namespace std;
int arr[MAX];
int TOP;

void push(int data)
{
    if (TOP + 1 < MAX)
    {
        arr[TOP++] = data;
    }
    else
    {
        cout << "Stack Overflow" << endl;
    }
    return;
}

void pop()
{
    if (TOP > 0)
    {
        arr[TOP - 1] = 0;
        TOP--;
    }
    else
    {
        cout << "POP operation cannot perform on empty stack" << endl;
    }
    return;
}
int top()
{
    return arr[TOP - 1];
}
void print()
{
    for (int i = 0; i < TOP; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    push(1);
    push(2);
    push(2);
    pop();
    cout << "Top : " << top() << endl;
    print();

    return 0;
}