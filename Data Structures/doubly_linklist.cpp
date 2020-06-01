#include<iostream>
using namespace std;

void doubly_linklist(int val);
void print();

struct Node
{
	int data;
	Node *prev;	
	Node *next;
};

Node *head = NULL;


int main()
{
	int num;
	char response = 'Y';
	cout<<"Enter number to the list : ";
	cin>>num;
	doubly_linklist(num);
	cout<<"\nList : ";
	print();
	cout<<"You want to enter more?(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
		
		
}


void doubly_linklist(int val)
{
	Node *temp;
	temp = NULL;
	temp = new Node();
	temp -> data = val;
	temp -> prev = NULL;
	temp -> next = head;
	if(head != NULL)
		head -> prev = temp;
	head = temp;	
}

void print()
{
	Node *p;
	p = head;
	while(p)
	{
		cout<<p -> data<<" ";
		p = p -> next;
	}
	cout<<"\n";
}
