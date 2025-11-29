#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n / 2 + 1; i++)
    {
        for (int a = 1; a <= i; a++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < n / 2 + 1; i++)
    {
        for (int b = i; b <= n / 2; b++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}