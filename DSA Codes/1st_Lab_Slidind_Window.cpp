#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6] = {2, 6, 7, -12, 76, 9};
    int max = INT_MIN;
    for (int i = 0; i < 4; i++)
    {

        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + a[i + j];
        }

        if (sum > max)
            max = sum;
    }
    cout << max << endl;
    return 0;
}