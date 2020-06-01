#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void insert(int val);
void rec_reverselist(Node *p);
void print();

Node *head = NULL;

int main()
{
	int num;
	char response = 'Y';
	cout<<"Enter element into the list : ";
	cin>>num;
	insert(num);
	cout<<"List : ";
	print();
	cout<<"\nYou want to enter more?(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
	else
	{
		cout<<"Reversed list : ";
		rec_reverselist(head);
		print();
	}	
}

void insert(int val)
{
	Node *temp,*p;
	temp = NULL;
	temp = new Node();
	temp -> data = val;
	temp -> next = NULL;
	if(head == NULL)
		head = temp;
	else
	{
		p = head;
		while(p -> next != NULL)
		{
			p = p -> next;
		}
		p -> next = temp;
	}	
}

void rec_reverselist(Node *p)
{
	if(p -> next == NULL)
	{ 
		head = p;
		return;
	}
	rec_reverselist(p -> next);
	Node *q = p -> next;
	q -> next = p;
	p -> next = NULL;
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
