

#include <iostream>
#include <algorithm>

using namespace std;

int smallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    
    return arr[k-1];
}

int kvalue(int k)
{
   return k; 
}

int main()
{
  int arr[]={1,2,5,4,12,34,21,3};
  int n= sizeof(arr)/sizeof(arr[0]);
  cout<<kvalue(6)<<" smallest element is "<<smallest(arr,n,6);
  return 0;
}