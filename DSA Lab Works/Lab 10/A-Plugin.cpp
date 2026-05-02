#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string stack;

    for (char c : s)
    {
        if (!stack.empty() && stack.back() == c)
        {
            stack.pop_back();
        }
        else
        {
            stack.push_back(c);
        }
    }

    cout << stack << endl;
    return 0;
}