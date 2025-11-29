#include<iostream>
using namespace std;
int main(){
    int n=9;
    // cin>>n;
    for(int i=1; i<=n/2+1; i++){
        if(i==n/2+1){
            cout<<"|";
            for(int j=1; j<n/2; j++){
            cout<<"-";
        }
        cout<<"*"<<"-"<<"-"<<">"<<"\n";

        }
        else{
        cout<<"|";
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        cout<<"*"<<"\n";
    }
}
for(int i=n/2; i>0; i--){
        cout<<"|";
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        cout<<"*"<<"\n";
}
    return 0;
}