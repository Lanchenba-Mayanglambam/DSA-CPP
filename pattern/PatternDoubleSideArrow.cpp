#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n/2+1; i++){
        for(int j=1; j<=n-(2*i-1); j++){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        for(int a=1; a<=2*i-3; a++){
            cout<<" ";
        }
        for(int l=1; l<=i; l++){
            if(i==1){
                cout<<" ";
            }
            else{cout<<l;}
        }
        cout<<endl;
    }
     for(int i=n/2; i>=1; i--){
        for(int j=1; j<=n-(2*i-1); j++){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        for(int a=1; a<=2*i-3; a++){
            cout<<" ";
        }
        for(int l=1; l<=i; l++){
            if(i==1){
                cout<<" ";
            }
            else{cout<<l;}
        }
        cout<<endl;
    }
    return 0;
}