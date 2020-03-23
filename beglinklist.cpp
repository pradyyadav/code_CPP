#include<iostream>
using namespace std;
void inserNodeAtBeginning(int val);
void print();


struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;

int main()
{
	int num;
	char response = 'Y';
	cout<<"Enter element : ";
	cin>>num;
	inserNodeAtBeginning(num);
	print();
	cout<<"Want to add more(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
	else
	{	
		system("pause");
		cout<<"Terminated!!!\n";
	}	
}

void inserNodeAtBeginning(int val)
{
	Node *temp;
	temp = NULL;
	temp = new Node();
	temp -> data = val;
	temp -> next = head;
	head = temp;

}

void print()
{
	Node *p;
	
	cout<<"List is : ";
	p = head;
	while(p)
	{
		cout<<p -> data<<" ";
		p = p -> next;
	}
	cout<<"\n";
}
