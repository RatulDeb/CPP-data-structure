#include<iostream>
using namespace std;
main()
{
    int row=3, col=3;
    int arr1[row][col]={ {10,20,30}, {90,80,70}, {40,50,60}};
    int arr2[row][col]={ {11,21,31}, {91,81,71}, {41,51,61}};
    int sum[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            sum[i][j]= arr1[i][j] + arr2[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}