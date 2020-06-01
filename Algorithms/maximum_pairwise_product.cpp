#include<iostream>
#include<vector>
using namespace std;
long long max_pair_prod(const vector<long long>& a);

int main()
{
	int n;
	cin>>n;
	vector<long long> number(n);
	for(int i=0;i<n;i++)
	{
		cin>>number[i];
	}
	
	long long result = max_pair_prod(number);
	cout<<result;
	
}

long long max_pair_prod(const vector<long long>& a)
{
	int n = a.size();
	
	int max_1 = -1;
	for(int i = 0;i < n;i++)
	{
		if( max_1 == -1 || a[i] > a[max_1])
			max_1 = i;
	}
	
	int max_2 = -1;
	for(int j = 0; j<n;j++)
	{
		if( j != max_1 && (max_2 == -1 || a[j] > a[max_2]))
			max_2 = j;
	}
	return (a[max_1] * a[max_2]);
}
