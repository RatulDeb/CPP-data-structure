#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    map<char,int> frequency;

    for(char ch:s)
    {
        frequency[ch]++;
    }

    for(auto item: frequency)
    {
        cout<<item.first<<" "<<item.second<<endl;
    }

}