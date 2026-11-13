#include<bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if(op == '^')
       return 3;
    if(op == '/' || op == '*')
       return 2;
    if(op == '+' || op == '-')
       return 1;
    else
       return 0;
}

string InfixToPrefix(string Infix)
{
    stack <char> st;
    string prefix = "";

    for(int i = Infix.length()-1; 0<=i ; i--)
    {
        char c = Infix[i];
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
            while(!st.empty() && st.top() != ')')
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
            while(!st.empty() && st.top() != ')' &&
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
    
    reverse(prefix.begin(),prefix.end());

    return prefix;
}

int main()
{
    string infix;
    cout<<"Enter infix expression: ";
    cin>>infix;
    cout<<"Infix Exoression: "<<infix<<endl;
    cout<<"Prefix Expression: "<<InfixToPrefix(infix)<<endl;
}