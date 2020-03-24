#include<iostream>
using namespace std;
void insert(int val,int n);
void print();

struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;


int main()
{
	int num,pos;
	char response = 'Y';
	cout<<"Enter the element you want to insert in list : ";
	cin>>num;
	cout<<"Enter the position desired in list : ";
	cin>>pos;
	insert(num,pos);
	cout<<"Linked-List : ";
	print();
	cout<<"Want to enter more(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		main();
	else
	{
		system("pause");
		cout<<"Terminated!!!\n";
	}	
}
void insert(int val,int n)
{
	Node *temp,*temp1;
	temp = NULL;
	temp = new Node();
	temp -> data = val;
	
	if(n == 1)
	{
		temp -> next = head;
		head = temp;
		return;
	}
	temp1 = head;
	for(int i=0;i<n-2;i++)
		temp1 = temp1 -> next;
	temp -> next = temp1 -> next;
	temp1 -> next = temp;	 

}
 
void print()
{
	Node *temp;
	temp = head;
	while(temp)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<"\n";
} 
