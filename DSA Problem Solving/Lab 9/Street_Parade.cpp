#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
            break;

        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int stack[100];
        int top = -1;

        int need = 1;

        for (int i = 0; i < n; i++)
        {

            if (a[i] == need)
            {
                need++;
            }
            else
            {
                top++;
                stack[top] = a[i];
            }

            while (top >= 0 && stack[top] == need)
            {
                top--;
                need++;
            }
        }

        if (top == -1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}