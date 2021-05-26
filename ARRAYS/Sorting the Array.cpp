/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int* a,int* b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}

void sorting(int arr[],int n)
{
    int i,j,min_idx;
    for(i=0;i<n-1;i++)
    {
    min_idx= i;
    
    for(j=i+1;j<n;j++)
    {
        if(arr[j]<arr[min_idx])
            min_idx=j;
            
        
    
    }
      swap(&arr[min_idx],&arr[i]);
    }
    
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,1,9,8,6,4,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The array is ";
    printArray(arr,n);
    sorting(arr,n);
    cout<<"The sorted array is ";
    printArray(arr,n);
    return 0;
}
