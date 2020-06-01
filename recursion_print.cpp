#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};

void insert(int val);
void print(Node *p);

Node *head = NULL;


int main()
{
	int num;
	char response = 'Y';
	cout<<"Enter a number to list : ";
	cin>>num;
	insert(num);
	cout<<"List : ";
	print(head);
	cout<<"\nYou want to enter more(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
	return 0;	
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

void print(Node *p)
{
	if(p == NULL)
		return;
	cout<<p -> data<<" ";
	print(p -> next); //calling function inside itself
	
}

