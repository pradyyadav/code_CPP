#include<iostream>
using namespace std;

void push(int val);
void pop();
void print();

int main()
{
	int num,choice;
	char response = 'Y';
	while(response == 'Y' || response == 'y')
	{
		cout<<"Enter a number to stack : ";
		cin>>num;
		push(num);
		cout<<"You want to enter more?(Y/N) : ";
		cin>>response;
	}
	while(choice == 1)
	{
		cout<<"What you want to do ?\n1)pop\n2)print \nchoice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
				pop();
				break;
			case 2:
				cout<<"Stack : ";
				print();
				break;
			default:
				cout<<"Enter valid choice.";		
		}	
	}
	
	
}
struct Node
{
	int data;
	Node *next;
};

Node *top = NULL;

void push(int val)
{
	Node *temp;
	temp = NULL;
	temp = new Node();
	temp -> data = val;
	temp -> next = top;
	top = temp;
}

void pop()
{
	Node *temp;
	temp = top;
	top = temp -> next;
	delete(temp);
}
void print()
{
	Node *p;
	p = top;
	while(p)
	{
		cout<<p -> data<<" ";
		p = p -> next;
	}
	cout<<"\n";
}
