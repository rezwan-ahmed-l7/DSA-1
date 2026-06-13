#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        bool letter = true;

        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                letter = false;
                break;
            }
        }

        if (letter)
        {
            count++;
        }
    }

    if (count % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}