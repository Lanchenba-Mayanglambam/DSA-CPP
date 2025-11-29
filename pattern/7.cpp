#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	// int num=(n/2)+1
	for(int i=1; i<=n; i++){
		if(i==2||i==3){
			for(int j=1; j<=n; j++){
				if(j==1||j==4){
					cout<<"*";
				}
				else{cout<<" ";}
			}
			cout<<"\n";
		}
		// cout<<"\n";
		if(i==5||i==6){
			for(int k=1; k<=n; k++){
				if(k==4||k==7){
					cout<<"*";
				}
				else{cout<<" ";}
			}
			cout<<"\n";
		}
		// cout<<"\n";
		if(i==1){
			for(int l=1; l<=n;l++){
				if(l==2||l==3){
					cout<<" ";
				}
				else{cout<<"*";}
			}
			cout<<"\n";
		}
		// cout<<"\n";
		if(i==7){
			for(int m=1; m<=n; m++){
				if(m==5||m==6){
					cout<<" ";
				}
				else{cout<<"*";}
			}
			cout<<"\n";
		}
		// cout<<"\n";
		if(i==4){
			for(int x=1; x<=n; x++){
				cout<<"*";
			}
			cout<<"\n";
		}
		// cout<<"\n";
	}
	return 0;
}