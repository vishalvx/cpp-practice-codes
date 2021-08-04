#include "bits/stdc++.h"

using namespace std;

void insertAtBottom(stack<int> &st, int data)
{
    if (st.empty())
    {
        st.push(data);
        return;
    }
    int topele = st.top();
    st.pop();
    insertAtBottom(st, data);
    st.push(topele);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int topele = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, topele);
}

int main()
{
    stack<int> st;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        st.push(arr[i]);
    }

    reverseStack(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}