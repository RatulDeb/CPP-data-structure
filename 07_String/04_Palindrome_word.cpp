#include<bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"Enter word: ";
    string s = "madam";
    string rev = s;
    
    reverse(rev.begin(), rev.end());

    if(rev == s)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
}