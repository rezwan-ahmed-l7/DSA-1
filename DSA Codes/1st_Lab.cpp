#include <iostream>
using namespace std;

int main()
{
    int age[100];
    int n, position, value;

    cout << " Enter size of array ";
    cin >> n;

    cout << "Enter array element ";
    for (int i = 0; i < n; i++)
    {
        cin >> age[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << age[i] << " ";
    }

    cout << "Enter the position and the value ";
    cin >> position >> value;

    for (int i = n - 1; i = position; i--)
    {
        age[i + 1] = age[i];
    }

    age[position] = value;
    n = n + 1;
    for (int i = 0; i < n; i++)
    {
        cout << age[i] << " ";
    }
}