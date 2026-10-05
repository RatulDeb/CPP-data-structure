#include<bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if(op == '^')
        {return 3;}
    if(op == '*' || op == '/')
        {return 2;}
    if(op == '+' || op == '-')
        {return 1;}
    return 0;
}

//Function to convert Infix to Postfix
string infixToPostfix(string infix)
{
    stack<char>st;
    string postfix = "";

    for(int i = 0; i < infix.length(); i++)
    {
        char c = infix[i];

        if(isalnum(c))
        {
            postfix += c;
        }

        else if(c == '(')
        {
            st.push(c);
        }
        else if(c == ')')
        {
            while(st.top() != '(')
            {
                postfix += st.top();
                st.pop();
            }

            if(st.top() == '(')
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && precedence(c) <= precedence(st.top()))
            {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty())
    {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main()
{
    string infix = "(a+b*c/d)+e*f-g";
    cout<<"Infix Expression"<<infix<<endl;
    cout<<"Postfix Expression "<<infixToPostfix(infix)<<endl;

    return 0;
}