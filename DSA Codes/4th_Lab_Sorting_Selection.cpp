#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Input Size: ";
    cin >> n;
    cout << "Input Elements: ";

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }

    for (int i = 0; i < n; i++)
    {
        int m = v[i];
        int k = i;
        for (int j = i; j < n; j++)
        {
            if (v[j] < m)
            {
                m = v[j];
                k = j;
            }
        }
        int t = v[i];
        v[i] = v[k];
        v[k] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
