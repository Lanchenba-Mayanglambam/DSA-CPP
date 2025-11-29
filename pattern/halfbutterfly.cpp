#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a = 1;
    while (a <= 2*n - 1)
    {
        cout<<" * ";
        a++;
    }
    cout<< "\n";
    int i=2;
    while (i<=n+1)
    {
       int j=1;
       while (j<=n+1-i)
       {
        cout<<" * ";
        j++;
       }
       int k=2;
       while (k<=2*i-2)
       {
       cout<<"   ";
       k++;
       }
       int l=1;
       while (l<=n+1-i)
       {
        cout<<" * ";
        l++;
       }
       cout<< "\n";
       i++;
    }
    return 0;
}