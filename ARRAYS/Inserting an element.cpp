
#include <iostream>

using namespace std;

void insertingAnElement(int arr[],int n,int k,int pos)
{
   
   for(int i=n-1;i>=pos;i--)
   {
       arr[i+1]=arr[i];
   }
   arr[pos]=k;
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
   int arr[]={1,2,3,4,7,4,7,9,8};
   int n=sizeof(arr)/sizeof(arr[0]);
   printArray(arr,n);
   cout<<endl;
   insertingAnElement(arr,n,5,4);
   printArray(arr,n);

    return 0;
}
