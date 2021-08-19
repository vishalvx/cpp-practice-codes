#include "bits/stdc++.h"

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class que
{
    node *front;
    node *back;

public:
    que()
    {
        front = NULL;
        back = NULL;
    }
    void push(int val)
    {
        node *n = new node(val);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }

        back->next = n;
        back = n;
    }
    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow condition \n first push the element" << endl;
            return;
        }
        node *toDelete = front;
        front = front->next;
        toDelete->next = NULL;
        delete toDelete;
    }
    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow condition \n first push the element" << endl;
            return -1;
        }
        return front->data;
    }
    bool isEmpty()
    {
        if (front == NULL)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    q.pop();
    q.pop();
    cout << q.isEmpty() << endl;

    return 0;
}