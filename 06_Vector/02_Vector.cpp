#include<iostream>
#include<vector>
using namespace std;
main()
{

    vector <string> v = { "Cat", "Dog", "Cow", "Bird" };
    v.push_back("Horse");

    for( auto i : v)
    {
        cout<< i << " ";
    }
    cout << endl;

    v.insert(v.begin()+1, "Tiger");
    v.erase(v.begin()+3);

    for( auto i : v )
    {
        cout << i << " " ;
    }

    cout << endl;
}