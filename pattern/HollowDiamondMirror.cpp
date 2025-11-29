#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n/2;
    for(int i=1; i<=n; i++){
        cout<<" * ";
    }
    cout<<"\n";
    for(int i=1; i<=m; i++){
        for(int j=i; j<=m; j++){
            cout<<" * ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"   ";
        }
        for(int a=i; a<=m; a++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=m-1; i>=1; i--){
        for(int j=i; j<=m; j++){
            cout<<" * ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout<<"   ";
        }
        for(int a=i; a<=m; a++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        cout<<" * ";
    }
    return 0;
}