#include<iostream>
using namespace std;
int main(){
	int a=0,n;
	cout<<"Enter a Number : ";
	cin>>n;
	for(int i=1;n>0;i++){
	a=n%10;
	cout<<a;
	n=n/10;
	}
	return 0;
}
