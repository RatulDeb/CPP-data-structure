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
string InfixToPostfix(string infix)
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
            while(!st.empty() && st.top() != '(' &&
                  (precedence(c) < precedence(st.top()) ||
                  (precedence(c) == precedence(st.top()) && c != '^')))
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
    while(true)
    {
        string infix;
        cout << "Enter the infix expression: ";
        cin>>infix;
        cout << "Infix expression " << infix << endl;
        cout << "Postfix expression " << InfixToPostfix(infix) << endl;
    }

    return 0;
}