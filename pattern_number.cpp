#include<iostream>
using namespace std;
int main()
{
    void n,a=1;
    cout<<"Enter number of line : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}
