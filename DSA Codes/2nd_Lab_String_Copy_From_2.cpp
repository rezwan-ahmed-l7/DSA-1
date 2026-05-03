#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p = "ABCD";
    string q = "XYZ";
    char k[10];
    int i = 0;
    int j = 0;

    while (p[i] != '\0')
    {
        k[i] = p[i];
        i = i + 1;
    }

    while (q[j] != '\0')
    {
        k[i + j] = q[j];
        j = j + 1;
    }

    k[i + j] = '\0';

    cout << "Copied: " << k << endl;

    return 0;
}