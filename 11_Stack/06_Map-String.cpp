#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string name;
    map<string,int> frquency;

    cout<<endl<<"Enter how many names you want to input: ";

    int n;
    cin>>n;

    cout<<"Enter "<<n<<" names: "<<endl;

    for(int i=0; i<n; i++)
    {
        cin>>name;
        frquency[name]++;
    }

    for( auto item : frquency)
    {
        cout<<item.first<<" "<<item.second<<endl;
    }


    cout<<"Enter a name: ";

    cin>>name;
    cout<< frquency[name] <<endl;

    cout<<"Enter how many names you want to check: ";

    int q;
    cin>>q;

    cout<<"Enter names: "<<endl;
    while(q--)
    {
        cin>>name;
        cout<< frquency[name] <<endl;
    }
}