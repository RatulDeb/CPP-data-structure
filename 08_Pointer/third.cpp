#include<bits/stdc++.h>
using namespace std;

int main()
{
    int salary = 10000;
    int *p = &salary;
    int **q = &p;

    cout << "1st line: " << salary << endl;  // 10000
    cout << "2nd line: " << &salary << endl; // 200
    cout << "3rd line: " << p << endl;       // 200
    cout << "4th line: " << *p << endl;      // 10000
    cout << "5th line: " << &p << endl;      // 500
    cout << "6th line: " << q << endl;       // 500
    cout << "7th line: " << *q << endl;      // 200
    cout << "8th line: " << **q << endl;     // 10000
    cout << "Last line: " << &q << endl;     // 900
}