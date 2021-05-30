/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int linearSearch(int arr[],int n,int key)
{
    int low,high,mid;
    low=0;
    high=n-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]<key)
    {
        low=mid+1;
    }
    else
    {
        high=mid-1;
    } 
    }
    
    return -1;
}

int main()
{
    int arr[]={1,2,3,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result=linearSearch(arr,n,6);
     if(result==-1)
     cout<<"The element is not found";
     else
      cout<<"The elemet is found at index "<<result;

    return 0;
}
