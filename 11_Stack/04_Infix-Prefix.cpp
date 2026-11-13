#include<bits/stdc++.h>
using namespace std;
int precedence(char op)
{
    if(op == '^')
    {
        return 3;
    }
    if(op == '*' || op == '/')
    {
        return 2;
    }
    if(op =='+' || op == '-')
    {
        return 1;
    }
    else
    return 0;
}
string InfixToPrefix(string infix)
{
    stack<char>st;
    string prefix = "";

    for (int i = infix.length()-1; i >= 0; i--)
    {
        char c = infix[i];

        if(isalnum(c))
        {
            prefix += c;
        }
        else if(c == ')')
        {
            st.push(c);
        }
        else if(c == '(')
        {
            while(st.top() != ')')
            {
                prefix += st.top();
                st.pop();
            }
            if(st.top() == ')')
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && st.top() != ')' &&
            (precedence(c) < precedence(st.top()) ||
            (precedence(c) == precedence(st.top()) && c == '^')))
            {
                prefix += st.top();
                st.pop();
            }
            st.push(c);
            
        }
    }
    while(!st.empty())
    {
        prefix += st.top();
        st.pop();
    }

    reverse(prefix.begin(), prefix.end());

    return prefix;
}
int main()
{
    while(true)
    {
        string infix;
        cout<<"Enter the infix expression: ";
        cin>>infix;
        cout<<"Infix expression "<<infix<<endl;
        cout<<"Prefix expression "<<InfixToPrefix(infix)<<endl;
    }

    return 0;
}