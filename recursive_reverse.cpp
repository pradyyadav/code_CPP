#include<iostream>
using namespace std; 

struct Node
{
	int data;
	Node *next;
};

void insert(int val);
void print(Node *p);
void reversePrint(Node *p);

Node *head = NULL;


int main()
{
	int num;
	char response = 'Y';
	cout<<"Enter a number to the list : ";
	cin>>num;
	insert(num);
	cout<<"\nList : ";
	print(head);
	cout<<"\nReversed List : ";
	reversePrint(head);
	cout<<"\nWant to enter more(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
	
	
}

void insert(int val)
{
	Node *temp,*p;
	temp = NULL;
	temp = new Node();
	temp -> data = val;
	temp -> next = NULL;
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		p = head;
	
		while(p -> next != NULL)
			p = p -> next;
	
		p -> next = temp;	
	}
}


void print(Node *p)
{
	if(p == NULL)
	{
		return;
	}
	cout<<p -> data<<" ";
	print(p -> next);
}


void reversePrint(Node *p)
{
	if(p == NULL)
	{
		return;
	}
	reversePrint(p -> next);
	cout<<p -> data<<" ";
}
