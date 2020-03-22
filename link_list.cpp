#include<iostream>
using namespace std;
void addNode(int val);
void print();

struct Node  				 //Declaration of Node data type
{
	int data;
	Node* next; 
};


Node* head = NULL;


int main()
{
	char response = 'Y';
	int num;
	
	do
	{
	cout<<"Enter a value append into link-list : ";
	cin>>num;
	addNode(num);
	cout<<"\nDo you want to enter more(Y/N) : ";
	cin>>response;
	}while(response == 'y' || response == 'Y');
	system("pause");
	print();
}

                       
void addNode(int val)        // Appends nodes to the linked-list
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


                       
void print()                 //Prints the elements in the linked-list
{
	Node *p;
	p = head;
	cout<<"\n\nYour linked-list data : ";
	while(p)
	{
		cout<<p -> data<<" ";
		p = p -> next;
	}
	cout<<"\n\n";
}

