#include<iostream>
using namespace std;
main()
{
    int row=2, col=3;
    int arr1[2][3]= { {10,20,30}, {11,21,31} };

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

}



