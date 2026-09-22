#include<iostream>
#include<vector>
using namespace std;
main()
{
vector<int> v= { 10, 15, 20, 25, 26, 28};
cout<<v.size()<<endl;  // it will show 6
v.push_back(30);


v.insert(v.begin()+2, 17);


cout<<v.size()<<endl;  // it will show 8
for(int i=0; i<v.size(); i++)
{
    cout<<v[i]<<" ";
}

cout<<endl;

//remove the last element
v.pop_back();

v.erase(v.begin()+4); // 25 gone

cout<<v.size()<<endl; // it will show 6 
for(int i=0; i<v.size(); i++)
{
    cout<<v[i]<<" ";
}

}




/*

1. v.insert(v.begin()+1, 18);
2. v.push_back(30);
3. v.pop_back();
4. v.erase(v.begin( )+4);

*/