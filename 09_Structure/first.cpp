#include<iostream>
using namespace std;

struct student
{
    string name;
    int id;   
};

main()
{
    student s[4];
    s[0].name = "abc"; s[0].id = 175;
    s[1].name = "def"; s[1].id = 176;
    s[2].name = "ghi"; s[2].id = 177;
    s[3].name = "jkl"; s[3].id = 178;

    for(int i=0; i<4; i++)
    {
        cout<<s[i].name<<" "<<s[i].id<<endl;
    }

    // student s1, s2;
    // s1.name = "abc";  s1.id = 175;
    // s2.name = "def";  s2.id = 176;

    // cout<<s1.name<<" "<<s1.id<<endl;
    // cout<<s2.name<<" "<<s2.id<<endl;
}