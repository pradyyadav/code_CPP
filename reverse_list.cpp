#include<iostream>
using namespace std;



struct Node
{
	int data;
	Node *next;
};

void insert(int val);
Node *reverse();
void print();

Node *head = NULL;


int main()
{
	int num;
	char response = 'Y';
	cout<<"Enter an element to insert in list : ";
	cin>>num;
	insert(num);
	cout<<"List : ";
	print();
	cout<<"You want to enter more(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
	else
	{
		head = reverse();
		cout<<"Reversed List : ";
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
	{
		head = temp;	
	}
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

Node *reverse()
{
	Node *prev,*curr,*next;
	prev = NULL;
	curr = head;
	while(curr != 0)
	{
		next = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	
	return head;
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
