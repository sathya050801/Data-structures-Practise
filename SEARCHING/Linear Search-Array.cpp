/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int binarySearch(int arr[],int n,int key)
{
    cout<<"The key is "<<key<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
            return i;
       
    }
    return -1; 
    
}

int main()
{
    int arr[]={1,2,3,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,n,8);
     if(result==-1)
     cout<<"The element is not found";
     else
      cout<<"The elemet is found at index "<<result;

    return 0;
}
