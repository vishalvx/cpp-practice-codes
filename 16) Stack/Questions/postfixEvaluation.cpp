#include "bits/stdc++.h"

using namespace std;
int postfixEvaluation(string s)
{

    stack<int> st;

    // for prefix we need to push from right to left
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            //ACSII value of '0' =48 TO CONVERT INTO INT '0'-'0' = 0
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(pow(op1, op2));
                break;

            default:
                break;
            }
        }
    }
    //at the end we have result store in stack;
    return st.top();
}

int main()
{
    cout << postfixEvaluation("46+2/5*7+") << endl;

    return 0;
}