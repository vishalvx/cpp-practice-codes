/*we can implement QUEUE using two approch
1: using two stack
    1.1:for push add element in one stack  O(1)
    1.2 :
        1.2.1 : if stack2 is empty.. first push all element into another stack2
        1.2.2 :  pop the element from 2nd stack
    O(n)
2:using one stack and second "callstack"( recursion )

*/
#include "bits/stdc++.h"

using namespace std;

class que
{
    stack<int> st1;
    stack<int> st2;

public:
    void push(int val)
    {
        st1.push(val);
    }
    void pop()
    {
        if (st1.empty() and st2.empty())
        {
            cout << "Queue is underflow\nFirst push the element" << endl;
            return;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        st2.pop();
    }
    int peek()
    {
        if (st1.empty() and st2.empty())
        {
            cout << "Queue is underflow\nFirst push the element" << endl;
            return -1;
        }
        // int topval = 0;
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        return st2.top();
    }
    bool isEmpty()
    {
        if (st1.empty() and st2.empty())
        {
            return true;
        }
        return false;
    }
};
class quer
{
    stack<int> st1;

public:
    void push(int val)
    {
        st1.push(val);
    }
    int pop()
    {
        if (st1.empty())
        {
            cout << "Queue is underflow\nFirst push the element" << endl;
            return -1;
        }
        int x = st1.top();
        st1.pop();
        if (st1.empty())
        {
            return x;
        }
        int item = pop();
        st1.push(x);
        return item;
    }
    bool isEmpty()
    {
        if (st1.empty())
        {
            return true;
        }
        return false;
    }
};
int main()
{
    quer q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;
    q.push(5);
    cout << q.pop() << endl;
    cout << q.isEmpty() << endl;

    return 0;
}