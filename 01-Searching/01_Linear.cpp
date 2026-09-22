#include<iostream>
using namespace std;

int main()
{
    int x,n,i;
    int arr[]={10, 23, 45, 67, 89, 38, 98, 26};
    cout<<endl<<"Enter the number you want to find: ";

    cin>>x;
    n=size(arr);
    int flag=0;

    for(i=0; i<n; i++){
       if(arr[i]==x){
           flag=1; 
           break;
       }
    }
  
    if(flag==1) cout<<"The number is found at the "<< i <<" index";
    else cout<<"The number is not found";

    return 0;
}
