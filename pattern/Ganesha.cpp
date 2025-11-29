#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1; i<=n/2; i++){
		for(int a=1; a<=n; a++){
			if(a==1||a==n/2+1||i==1&&a>n/2+1){
				cout<<"*";
			}
			else{cout<<" ";}
			// cout<<"\n";
		}
		cout<<"\n";
		}
		for(int b=1; b<=n; b++){
			cout<<"*";
		}
		cout<<"\n";
	for(int c=1; c<=n/2; c++){
		for(int d=1; d<=n; d++){
			if(d==n/2+1||d==n||c==n/2&&d<n/2+1){
				cout<<"*";
			}
			else{cout<<" ";}
			// cout<<"\n";
		}
		cout<<"\n";
	}
	return 0;
}