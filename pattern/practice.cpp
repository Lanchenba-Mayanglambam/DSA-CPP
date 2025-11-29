#include<iostream>
using namespace std;
int main (){
	int n;
	std::cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
        while(j<=i-1){
			std::cout<<"  ";
			j++;
		}
		int k=1;
		while(k<=(n+1)-i){
			std::cout<<" * ";
			k++;
		}     
		std::cout<<endl;
		i++;
	}
	return 0;
}