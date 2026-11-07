#include<bits/stdc++.h>
using namespace std;

// alphabet count
// int main(){
//     string s;
//     //cin>> s; 
//     getline(cin,s);
//     map<char,int> alph;

//     for(char ch:s){
//         alph[ch]++;
//     }

//     for(auto p: alph){
//         cout<<p.first<<" "<<p.second<<endl;
//     }

// }


// word count
int main(){
    
    string name;
    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name;
        m[name]++;
    }

    //for print all map values
    for( auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //for check name individually
    cin>>name;
    cout<< m[name] <<endl;

    //for check name individually
    int q;
    cin>>q;
    while(q--){
        cin>>name;
        cout<< m[name] <<endl;
    }


    

}