#include<iostream>
using namespace std;

main()
{
    int arr[]= {5, 2, 4, 3, 1};
    int n= 5;

    for(int steps=1; steps<n; steps++)
    {
        int flag=0;
        for(int i=0; i<n-steps; i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i] , arr[i+1]);
                flag=1; 
            }
        }

        if(flag==0)
            break;
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
