#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    vector<int> v = {5, 10, 15, 20, 25};

    int startposition, endposition;
    cout << "Enter Start Position and End Position: ";
    cin >> startposition >> endposition;

    for (int i = startposition; i <= endposition; i++)
    {
        sum = sum + v[i];
    }
    cout << sum;

    return 0;
}