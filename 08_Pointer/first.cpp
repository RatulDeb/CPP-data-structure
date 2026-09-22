#include<iostream>
using namespace std;

main()
{
    int x=5;
    int *p= &x;
    cout<<p<<endl;
    cout<<&x<<endl;
    p= NULL;

    cout<<"Null korar por p er value: "<< p <<endl;
}