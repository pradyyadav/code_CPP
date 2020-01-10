#include<iostream>
using namespace std;
int main(){
	int T,first=0,second=1,sum;
	cout<<"Enter the number of terms in fibonacci series : ";
	cin>>T;
	for(int i=0;i<T;i++){
		if(i<=1)
		cout<<i<<",";
		else{
			sum=first+second;
			first=second;
			second=sum;
			cout<<second<<",";
		}
	}
	return 0;
}
