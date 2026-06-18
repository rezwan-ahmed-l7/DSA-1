#include <bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    cout << "Enter a string: ";
    cin >> A;

    int n = A.length();
    char st[n];
    int top = -1;

    for (int i = 0; i < n; i++)
    {
        top = top + 1;
        st[top] = A[i];
    }

    cout << "Reversed: ";
    while (top != -1)
    {
        cout << st[top];
        top = top - 1;
    }

    cout << endl;
    return 0;
}