#include <bits/stdc++.h>
using namespace std;

int main()
{
    string T = "BAUSTUNI";
    string P = "STU";

    int n1 = T.length();
    int n2 = P.length();

    bool found = false;

    for (int i = 0; i <= n1 - n2; i++)
    {
        int c = 0;
        for (int j = 0; j < n2; j++)
        {
            if (P[j] == T[i + j])
            {
                c = c + 1;
            }
            else
            {
                break;
            }
        }

        if (c == n2)
        {
            cout << "Pattern Found at position " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Pattern Not Found" << endl;
    }

    return 0;
}