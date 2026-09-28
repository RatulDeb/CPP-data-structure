#include<bits\stdc++.h>
using namespace std;

int main()
{
    int arr[]={10, 23, 26, 38, 45, 65, 67, 77, 83, 89, 98};

    int target,n;
    cout<<"Enter the number you want to find"<<endl;
    cin>>target;

    n=11;

    int low = 0;
    int high = n-1;
    int flag=0;

    while(low <= high)
    {
        int mid = low + (high-low)/2;

        if(arr[mid]== target)
        {
            flag=1;
            break;
        }
        else if(arr[mid]<target)
        {
            low = mid+1;
        }
        else if(arr[mid]>target)
        {
            high = mid-1;
        }
    }
}