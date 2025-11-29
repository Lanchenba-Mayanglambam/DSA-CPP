#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while (i<=n)
    {
       int j=1;
       while (j<=i-1)
       {
        cout<<" ";
        j++;
       }
       int k=1;
       while (k<=n+1-i)
       {
        cout<<"* ";
        k++;
       }
       cout<<"\n";
       i++;
    }
    return 0;
}