#include "bits/stdc++.h"

using namespace std;

#define N 20

class que
{
    int front, back;
    int *arr;

public:
    que()
    {
        front = -1;
        back = -1;
        arr = new int[N];
    }
    void push(int val)
    {
        if(front ==-1){
            front++;
        }
        if (front == N - 1)
        {
            cout << "Queue is Overflowing \nfirst pop the element" << endl;
            return;
        }
        arr[++back] = val;
    }
    void pop()
    {
        if (front > back || (front == -1 && back==-1))
        {
            cout << "Queue is empty \nfirst push element" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front > back || (front == -1 && back==-1))
        {
            cout << "Queue is empty \nfirst push element" << endl;
            return -1;
        }
        return arr[front];
    }
    bool isEmpty()
    {
        if (front > back || (front == -1 && back==-1))
        {
            return true;
        }else{
            return false;
        }
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