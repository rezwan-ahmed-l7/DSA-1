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

    int start = 0;
    int last = n - 1;

    while (start <= last)
    {
        int mid = (start + last) / 2;
        if (v[mid] == q)
        {
            cout << "Found" << endl;
            return 0;
        }
        else if (q > v[mid])
        {
            start = mid + 1;
        }
        else
        {
            last = mid - 1;
        }
    }

    cout << "Not Found" << endl;
    return 0;
}
