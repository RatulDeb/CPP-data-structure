#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c == '^')
       return 3;
    if(c == '/' || c == '*')
       return 2;
    if(c == '+' || c == '-')
       return 1;
    return 0;
}

string InfixToPostfix(string infix)
{
    stack<char> st;
    string postfix = "";

    for(int i=0; i<infix.length(); i++)
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
            if(st.top()== '(')
            {
                st.pop();
            }
        }

        else
        {
            while(!st.empty() && st.top()!='(' &&
                  (precedence(c)<precedence(st.top()) || 
                  (precedence(c)==precedence(st.top()) && c!= '^')))
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
    cout<<"how many test case do you want: ";
    int T;
    cin>>T;

    cout<<endl<<"Enter "<<T<<" infix Expressions: "<<endl;
    while(T--)
    {
        string infix;
        cin>>infix;

        string postfix = InfixToPostfix(infix);
        reverse(postfix.begin(), postfix.end());

        cout<<postfix<<endl;
    }
    return 0;
}