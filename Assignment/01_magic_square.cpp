#include<bits/stdc++.h>
using namespace std;

int main()
{
    int matrix [3][3] = 
            {{8, 1, 6},
             {3, 5, 7},
             {4, 9, 2} } ;

    int rowsum[3]= {0, 0, 0};
    int colsum[3]= {0, 0, 0};
    int dig1 = 0, dig2 = 0;

    for(int i=0; i<3; i++)
    {
       for(int j=0; j<3; j++)
       {
           rowsum[i] += matrix[i][j];
           colsum[j] += matrix[i][j];
       }

       dig1 += matrix[i][i];
       dig2 += matrix[i][2-i];
    }

    if( dig1 == dig2 &&
        rowsum[0] == dig1 &&
        rowsum[1] == dig1 &&   
        rowsum[2] == dig1 &&   
        colsum[0] == dig1 &&   
        colsum[1] == dig1 &&   
        colsum[2] == dig1 )
      {
         cout<<"It is a magic square";
      }
    else
    {
        cout<<"It is not a magic square";
    }

    return 0;
}