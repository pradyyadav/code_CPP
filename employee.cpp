//this program uses class and object and tells the total amount a firm needs to invest(along with payhike) on their employees according to their designation grades.

#include<iostream>
using namespace std;
struct Employee
{	
	char name[100];
	int age,Id;
	float sal;
	char grade;
};
int main()                           
{
	int n;
	int a=0,b=0,c=0,d=0;

	cout<<"Enter the number of employees in the firm : ";
	cin>>n;
	cout<<"\n";
	struct Employee ob[n];      
	for(int i=0;i<n;i++)
	{

		cout<<"Enter Employee Name : ";
		cin>>(ob[i].name);
		
		cout<<"\nEnter age of : ";
		cout<<(ob[i].name)<<" : ";
		cin>>(ob[i].age);
		cout<<"\n";
		cout<<"\nEnter Employee ID : ";
		cin>>(ob[i].Id);
		cout<<"\nEnter Salary : ";
		cin>>(ob[i].sal);
		cout<<"\nEnter designation grade(A,B,C,D) : ";
		cin>>(ob[i].grade);
		cout<<"\n";
}
	for(int i=0;i<n;i++){
	
	if(ob[i].grade=='A')
		a+=ob[i].sal+ob[i].sal;
	if(ob[i].grade=='B')
		b+=ob[i].sal+(0.5*ob[i].sal);
	if(ob[i].grade=='C')
		c+=ob[i].sal+(0.3*ob[i].sal);
	if(ob[i].grade=='D')
		d+=ob[i].sal+(0.1*ob[i].sal);		
}
	cout<<"\nTotal : "<<a+b+c+d<<"\n";
	return 0;
}
