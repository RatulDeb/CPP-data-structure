#include<iostream>
using namespace std;
main()
{
    int n,sum=0;;
    cout<<"Enter a number: ";
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }
    
    float avg=(float)sum/n;
    cout<<"The average is " << avg ;
}