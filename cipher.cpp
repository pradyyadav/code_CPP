#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int ascii,shift;
	string text;
	cout<<"Enter your text : ";
	cin>>text;
	cout<<"\nEnter shifting pattern : ";
	cin>>shift;
	for(int i=0;i<text.length();i++)
	{
		ascii=text[i];
		if(isupper(text[i]))
		{
			text[i]=((ascii + shift - 65)%26) + 65;
		}		
		else
		{
			text[i]=((ascii + shift - 97)%26) + 97;
		}
	}
	cout<<text<<"\n";
}
