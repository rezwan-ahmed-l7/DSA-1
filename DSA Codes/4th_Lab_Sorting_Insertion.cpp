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

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int t = v[i];
        while (j >= 0 && t < v[j])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = t;
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
