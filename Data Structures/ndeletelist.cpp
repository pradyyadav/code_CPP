#include<iostream>
using namespace std;


void insert(int val,int n);
void delete_node(int n);
void print();


struct Node
{
	int data;
	Node *next;
};

Node *head = NULL;


int main()
{
	int num,insert_pos,delete_pos;
	char response = 'Y';
	cout<<"Enter a number to insert : ";
	cin>>num;
	cout<<"Enter position in list : ";
	cin>>insert_pos;
	insert(num,insert_pos);
	cout<<"List : ";
	print();
	cout<<"Press Y to enter or N to delete elements(Y/N) : ";
	cin>>response;
	
	if(response == 'Y' || response == 'y')
		main();
	else
	{
		cout<<"Enter position you want to delete : ";
		cin>>delete_pos;
		delete_node(delete_pos);
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
	
	if(n==1)
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

void delete_node(int n)
{
	int delete_pos;
	char response = 'Y';
	Node *temp1,*temp;
	temp1 = head;
	for(int i=0;i<n-2;i++)
		temp1 = temp1 -> next;
	temp = temp1 -> next;
	temp1 -> next = temp -> next;
	free(temp);     //can also use delete(temp)
	cout<<"List : ";
		print();
	cout<<"You want to delete more?(Y/N) : ";
	cin>>response;
	if(response == 'Y' || response == 'y')
		{
			cout<<"Enter the position to delete : ";
			cin>>delete_pos;
			delete_node(delete_pos);
			cout<<"List : ";
			print();
		}
	else
		return;		
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
