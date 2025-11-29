#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "1";
            for (int j = 1; j < i - 1; j++)
            {
                cout << "0";
                // if(i!=1){
                //     cout<<"1";
                // }
            }
            if (i != 1)
            {
                cout << "1";
            }
            cout << endl;
        }
        else
        {
            for (int k = 1; k <= i; k++)
            {
                cout << "1";
            }
            cout << endl;
        }
    }
    return 0;
}