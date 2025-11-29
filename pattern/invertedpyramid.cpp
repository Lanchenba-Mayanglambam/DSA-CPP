#include<iostream>
using namespace std;
int main(){
    int n=5;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n+1-i)
        {
           cout<<"*";
           j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}