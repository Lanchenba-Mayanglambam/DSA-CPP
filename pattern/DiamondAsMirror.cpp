#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n/2+1;
    for(int i=1; i<=x; i++){
        for(int k=1; k<=x-i; k++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n/2; i>=1; i--){
        for(int a=1; a<=x-i; a++){
            cout<<" ";
        }
        for(int b=1; b<=(2*i)-1; b++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}