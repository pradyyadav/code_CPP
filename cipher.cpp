#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>


using namespace std;
int CEASER_CIPHER(string text,int s);

int main()
{
	int ascii,shift;
	string user_text;
	cout<<"Enter your text : ";
	cin>>user_text;
	cout<<"\nEnter shifting pattern : ";
	cin>>shift;
	CEASER_CIPHER(user_text,shift);
	
}
int CEASER_CIPHER(string text,int s)
{
    int ascii;
    for(int i=0;i<text.length();i++)
    {
        ascii=text[i];
        if(isupper(text[i]))
        {
            text[i]=((ascii + s - 65)%26) + 65;
        }
        else
        {
            text[i]=((ascii + s - 97)%26) + 97;
        }
    }
    cout<<text<<"\n";
    return 0;
}
