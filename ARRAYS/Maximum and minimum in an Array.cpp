

#include <iostream>
#include <math.h>

using namespace std;

int getMin(int arr[],int n)
{
    int res= arr[0];
    for(int i=0;i<n;i++)
    {
        res= min(res,arr[i]);
    }
    return res;
}

int getMax(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        res= max(res,arr[i]);
    }
    return res;
}

int main()
{
    int arr[]={1,12,23,14,1,24,2,45,56,78,65,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The smallest element is "<<getMin(arr,n)<<endl;
    cout<<"The largest element is "<<getMax(arr,n)<<endl;
    return 0;
}