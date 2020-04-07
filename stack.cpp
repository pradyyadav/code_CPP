#include<iostream>
using namespace std;

#define INT_MAX 101

class Stack
{
	private:
		int A[INT_MAX];
		int top;
	public:
		Stack()
		{
			top = -1;
		}	
		
		bool isEmpty()
		{
			if(top == -1)
				return 1;
			else
				return 0;	
		}
		void Push(int val)
		{
			if(top == INT_MAX - 1)
			{	
				cout<<"ERROR : Stack overflow!!!\n";
				return;
			}
			A[++top] = val;	
		}
		void Pop()
		{
			if(top == -1)
			{
				cout<<"ERROR : Nothing to Pop!!!\n";
				return;
			}
			top--;
		}
		void print()
		{
			cout<<"Stack : ";
			for(int i=0;i<=top;i++)
			{
				cout<<A[i]<<" ";
			}
			cout<<"\n";
		}
};

int main()
{
	Stack S;
	int num,choice=1;
	char response = 'Y';
	
	while(response == 'Y' || response == 'y')
	{	
		cout<<"Enter a number in stack : ";
		cin>>num;
		S.Push(num);
		cout<<"You want to enter more? (Y/N) : ";
		cin>>response;	
	}
	while(choice == 1)
	{
		cout<<"What you want to perform?\n1) Pop\n2) Print\nEnter choice(1 or 2) : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				S.Pop();
				break;
			case 2: 
				S.print();
				break;
			default:
				cout<<"Enter valid option.\n";
						
		}
	}
}
