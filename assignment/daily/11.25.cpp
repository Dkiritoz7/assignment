#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		for(int j=0;j<k;j++){
			cout<<"*";
		}
		k+=2;
		for(int j=0;j<n-i-1;j++){
			cout<<" ";
		}
		cout<<endl;
	}
	k=1+2*(n-2);
	for(int i=0;i<n-1;i++){
		for(int j=0;j<=i;j++){
			cout<<" ";
		}
		for(int j=0;j<k;j++){
			cout<<"*";
		}
		k-=2;
		for(int j=0;j<=i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}
