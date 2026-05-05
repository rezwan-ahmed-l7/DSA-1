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

    int q;
    cout << "Input Query: ";
    cin >> q;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == q)
        {
            cout << "Found" << endl;
            return 0;
        }
    }

    cout << "Not Found" << endl;
    return 0;
}