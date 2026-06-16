#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '/')
    {
        return 5;
    }
    else if (c == '*')
    {
        return 4;
    }
    else if (c == '+')
    {
        return 3;
    }
    else if (c == '-')
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int main()
{
    cout << "Enter Function: ";

    string eq;
    cin >> eq;

    string postfix = "";
    stack<char> st;

    for (int i = 0; i < eq.length(); i++)
    {
        if (isalnum(eq[i]))
        {
            postfix = postfix + eq[i];
        }
        else if (eq[i] == '(')
        {
            st.push(eq[i]);
        }
        else if (eq[i] == ')')
        {
            while (st.top() != '(')
            {
                postfix = postfix + st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(eq[i]))
            {
                postfix = postfix + st.top();
                st.pop();
            }
            st.push(eq[i]);
        }
    }

    while (!st.empty())
    {
        postfix = postfix + st.top();
        st.pop();
    }

    cout << "Postfix: " << postfix;

    return 0;
}