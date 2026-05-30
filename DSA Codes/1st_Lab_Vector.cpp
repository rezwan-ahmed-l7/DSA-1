#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    int position = 2;
    int value = 100;

    v.insert(v.begin() + position, value);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.erase(v.begin() + 2);
    cout << endl;

    for (int a : v)
    {
        cout << a << " ";
    }

    return 0;
}