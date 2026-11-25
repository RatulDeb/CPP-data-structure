#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        map<char,int> frequency;

        for(char ch: s)
        {
            frequency[ch]++;
        }

        // for(auto item: frequency)
        // {
        //     cout<<item.first<<" "<<item.second<<endl;
        // }

        cout<<frequency.size()<<endl;
    }

    return 0;
}