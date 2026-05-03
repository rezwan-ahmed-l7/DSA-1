#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;
    cout << "Your String: " << s << endl;

    int i = 0;
    int c = 0;
    while (s[i] != '\0')
    {
        c = c + 1;
        i = i + 1;
    }
    cout << "String Length: " << c << endl;

    return 0;
}