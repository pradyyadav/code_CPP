/* The program gives wrong answers for particular set of inputs
    if you find any discrepancy let me know it */



#include<iostream>
#include<string>
#include<stack>
#include<cmath>

using namespace std;

int postfixEvaluation(string expression);
bool isOperand(char C);
bool isOperator(char C);
long long int evaluation(char C,int A,int B);


int main()
{
    string exp;
    cout<<"Enter postfix expression(use '$' for exponent) : ";
    getline(cin,exp);
    cout<<"Result : "<<postfixEvaluation(exp)<<"\n";
}


int postfixEvaluation(string expression)
{
    stack<char> S;

    for(int i=0;i<expression.length();i++)
    {
        if(isOperand(expression[i]))
        {
            int operand = 0;
            while(i<expression.length() && isOperand(expression[i]))
            {
                operand = operand*10 + int(expression[i]) - 48;
                i++;
            }
            i--;
            S.push(operand);

        }
        else if(expression[i] == ' ' || expression[i] == ',')
        {
            continue;
        }
        else if(isOperator(expression[i]))
        {
            int operand_2 = S.top();
            S.pop();
            int operand_1 = S.top();
            S.pop();
            S.push(evaluation(expression[i],operand_1,operand_2));
        }
    }
    return S.top();
}

bool isOperand(char C)
{
    if(int(C) >= 48 && int (C) <= 57)
        return true;
    return false;
}

bool isOperator(char C)
{
    if(C == '+' || C == '-' || C == '*' || C == '/' || C == '$')
        return true;
    return false;
}

long long int evaluation(char C,int A,int B)
{
    if(C == '+')
        return A+B;
    else if(C == '-')
        return A-B;
    else if(C == '*')
        return A*B;
    else if(C == '/')
        return A/B;
    else if(C == '$')
        return pow(A,B);
}
