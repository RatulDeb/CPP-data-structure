#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r1,c1,r2,c2;

    cout<<"\nEnter rows and columns of Matrix A: ";
    cin>>r1>>c1;

    cout<<"\nEnter rows and columns of Matrix B: ";
    cin>>r2>>c2;

    if(c1 == r2)
    {
        cout<<"\nMatrix Multiplication is Possible.\n";
    }

    const int MAX = 100;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    cout<<"\nEnter " << r1*c1 << " elements of Matrix A: ";
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"\nEnter " << r2*c2 << " elements of Matrix B: ";
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>B[i][j];
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            C[i][j]=0;
            for(int k=0; k<c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResult Matrix:\n";
    for(int i = 0; i < r1; i++)
    {
       for(int j = 0; j < c2; j++)
           {
                cout << C[i][j] << " ";
           }
        cout << endl;
       }
    return 0;

}