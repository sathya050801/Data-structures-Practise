/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void occurence(int arr[],int n,int key)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
         count++;
    }
    cout<<"The apperance of "<<key<<" is "<<count<<" times";
}


int main()
{
    int arr[]={1,2,3,4,5,5,5,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    occurence(arr,n,5);
    
    return 0;
}
