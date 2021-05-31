/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void segregate(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
       while(arr[left]%2==0 && left<right)
        left++;
     
       while(arr[right]%2==1 && left<right)
        right--; 
        
        if(left<right)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            
            left++;
            right--;
        }
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
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The orginal array is ";
    printArray(arr,n);
    segregate(arr,n);
    cout<<"Segregated array is ";
    printArray(arr,n);
    return 0;
}
