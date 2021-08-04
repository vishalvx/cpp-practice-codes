#include "bits/stdc++.h"

using namespace std;
#define CAPACITY 100

class Stack
{
    int *arr;
    int top;

public:
    /*
Construtor with no arg AND this constructor will overload
*/
    Stack()
    {
        top = -1;
        arr = new int[CAPACITY];
    }

    /*
Push Function
*/

    void push(int data)
    {
        if (top == CAPACITY)
        {
            cout << "stack is full..." << endl
                 << "First pop element from stack" << endl;
            return;
        }
        else
        {
            arr[++top] = data;
        }
    }
    /*
    POP function 
    */
    void pop()
    {
        if (top == -1)
        {
            cout << "no elements in stack " << endl
                 << "First push an element an then POP" << endl;
            return;
        }
        top--;
    }
    /*
    peekfuncation (to see top element)
    */
    void peek()
    {
        if (top == -1)
        {
            cout << "no elements in stack " << endl;
            return;
        }
        cout << arr[top] << endl;
    }
    /*
    Display Function
    */
    void display()
    {

        if (top == -1)
        {
            cout << "There is No elements in stack. " << endl;
            return;
        }
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{

    // Stack s1 = Stack();
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    s1.display();
    s1.pop();
    s1.pop();
    s1.display();

    s1.peek();

    return 0;
}