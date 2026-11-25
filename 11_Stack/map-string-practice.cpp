#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    map <string,int> frequency;

    cout<<"Enter how many names you want to input: ";
    int n;
    cin>>n;

    cout<<"Enter "<<n<<" names:";
    for(int i=0; i<n; i++)
    {
        cin>>name;
        frequency[name]++;
    }

    for(auto item : frequency)
    {
        cout<<item.first<<" "<<item.second<<endl;
    }

    cout<<"Enter a name to check frquency: ";
    cin>>name;
    cout<<frequency[name]<<endl;

    cout<<"Enter how many name you wnat to check: ";
    int x;
    cin>>x;

    cout<<"Enter names: "<<endl;
    while(x--)
    {
        cin>>name;
        cout<<frequency[name]<<endl;
    }
    return 0;
}