#include <iostream>
using namespace std;
int main()
{
    cout<<"Happy Diwali! 🪔"<<"\n";
    int w = 3;
    for (int i = 1; i <= w; i++)
    {
        if (i == 2)
        {
            for (int j = 1; j <= 13; j++)
            {
                if (j == 6 || j == 7 || j == 8)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            for (int j = 1; j <= 13; j++)
            {
                if (j == 7)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i == 5)
        {
            for (int j = 1; j < 4; j++)
            {
                cout << " ";
            }
            for (int a = 1; a <= 15 - (2 * 4); a++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j < i; j++)
            {
                cout << " ";
            }
            for (int a = 1; a <= 15 - (2 * i); a++)
            {
                cout << "*";
            }
        }

        cout << "\n";
    }
    return 0;
}
