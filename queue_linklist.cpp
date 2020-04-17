#include <iostream>
using namespace std;

void enqueue(int val);
void dequeue();
void print();

struct Node
{
  int data;
  Node *next;
};

Node *front = NULL;
Node *rear = NULL;


int main()
{
    int num;
    char response = 'Y';
    cout<<"Enter an element into queue : ";
    cin>>num;
    enqueue(num);
    cout<<"List : ";
    print();
    cout<<"Want to enter more?(Y/N) : ";
    cin>>response;
    if(response == 'Y' || response == 'y')
      main();
    cout<<"dequeueing : ";
    while(response == 'Y' || response == 'y')
    {
      dequeue();
      cout<<"List : ";
      print();
      cout<<"Want to dequeue more?(Y/N) : ";
      cin>>response;
    }
}


void enqueue(int val)
{
  Node *temp = NULL;
  temp = new Node();
  temp -> data = val;
  temp -> next = NULL;
  if(front == NULL && rear == NULL)
  {
    front = rear = temp;
    return;
  }
  rear -> next = temp;
  rear = temp;
}

void dequeue()
{
  Node *temp;
  temp = front;
  if(front == rear)
  {
    
    front = rear = NULL;
    free(temp);
    return;
  }
  front = front -> next;
  free(temp);
}

void print()
{
  Node *p;
  p=front;
  while(p)
  {
    cout<<p -> data<<" ";
    p = p -> next;
  }
  cout<<"\n";
}
