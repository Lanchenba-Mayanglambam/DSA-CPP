#include<iostream>
using namespace std;
int main(){
    int n=9;
    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){
            cout<<"  ";
        }
        for(int k=1; k<=n-i+1; k++){
            cout<<" ✨ ";
        }
        cout<<"\n";
    }
    int a=9;
    for(int i=1; i<a/2; i++){
        for(int j=1; j<=2*a-i+1; j++){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}