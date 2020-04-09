#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool arePair(char opening,char closing);
bool areParenthesisBalanced(string exp);


int main()
{
	string expression;
	cout<<"Enter bracket series to check : ";
	cin>>expression;
	if(areParenthesisBalanced(expression))
		cout<<"Balanced\n";
	else
		cout<<"Not balanced\n";	
}


bool arePair(char opening,char closing)
{
	if(opening == '(' && closing == ')')
		return true;
	else if(opening == '{' && closing == '}')
		return true;
	else if(opening == '[' && closing == ']')
		return true;
	else 
		return false;			
}

bool areParenthesisBalanced(string exp)
{
	stack<char> S;
		for(int i = 0;i<exp.length();i++)
		{
			if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
				S.push(exp[i]);
			else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
				{
					if(S.empty() || !arePair(S.top(),exp[i]))
						return false;
					else
						S.pop();	
				}				
		}
		return S.empty()?true:false;
}


