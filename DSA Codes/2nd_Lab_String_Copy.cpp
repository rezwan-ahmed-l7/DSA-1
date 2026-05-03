#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p = "ABCD";
    char k[5];
    int i = 0;

    while (i < 3)
    {
        k[i] = p[i];
        i = i + 1;
    }

    k[i] = '\0';
    cout << "Copied: " << k << endl;

    return 0;
}