#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 3, 5};

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << "Duplicate found" << endl;
            return 0;
        }
    }

    cout << "Duplicate NOT FOUND";

    return 0;
}