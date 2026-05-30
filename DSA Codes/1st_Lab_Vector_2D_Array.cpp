#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter 9 numbers ";
    int k;
    vector<vector<int>> v;

    for (int r = 0; r < 3; r++)
    {
        vector<int> v1;

        for (int c = 0; c < 3; c++)
        {
            cin >> k;
            v1.push_back(k);
        }

        v.push_back(v1);
    }

    int max = INT_MIN;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (v[r][c] > max)
                max = v[r][c];
        }
    }

    cout << max << endl;

    return 0;
}