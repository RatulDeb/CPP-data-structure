#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "(a+b-c)+d";
    stack<char> st;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
           st.push(i);
        }
        if(s[i] == 'a')
        {
            
        }
    }
    cout<<s;
}