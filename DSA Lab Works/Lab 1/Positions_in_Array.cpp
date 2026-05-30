#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] <= 10)
        {
            cout << "A[" << i << "] = " << A[i] << endl;
        }
    }

    return 0;
}