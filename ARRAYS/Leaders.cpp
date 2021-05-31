/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void leaders(int arr[],int n)
{
    
    for(int i=0;i<n;i++)
    {
        int j;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
             break;
        }
        
        if(j == n)
            cout<<arr[i]<<" ";
        
    }
}



int main()
{
    int arr[]={2,15,3,4,5,1,2,3,1,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The leaders are ";
    leaders(arr,n);
    return 0;
}
