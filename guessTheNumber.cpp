#include<iostream>
#include<cstdlib>
using namespace std;
int getRandom(int lower,int upper);
int main()
{
	int level,choice,hidden,i=0;
	cout<<"Enter level of game : \n";
	cout<<"Level-1 : 0-10\nLevel-2 : 0-50\nLevel-3 : 0-100\nLevel-4 : 0-500\n\nLevel : ";
	cin>>level;
	switch(level)
	{
		case 1:
		{
			hidden=getRandom(0,10);
			cout<<"Enter a number between 0-10 : ";
			break;
		}
		case 2:
		{
			hidden=getRandom(0,50);
			cout<<"Enter a number between 0-50 : ";
			break;
		}
		case 3:
		{
			hidden=getRandom(0,100);
			cout<<"Enter a number between 0-100 : ";
			break;
		}
		case 4:
		{
			hidden=getRandom(0,500);
			cout<<"Enter a number between 0-500 : ";
			break;
		}
		default:
			cout<<"Enter a valid game level!!!\n";
	}

	
	cin>>choice;
	while(choice!=hidden)
	{
		i++;
		if(choice<hidden)
		{
			cout<<"The number is greater than your input\nMake another try : ";
		}
		else 
		{
			cout<<"The number is less than your input\nMake another try : ";
		}
		
		cin>>choice;
		
		
	}
	cout<<"Gotcha!!!\nYou took "<<i+1<<" turns to guess.\n";
	return 0;	
}
int getRandom(int lower,int upper)
{
	srand(time(NULL));
	return (rand()%(upper-lower+1));
}
