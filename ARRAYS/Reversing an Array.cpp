

#include <iostream>

using namespace std;

void reverseArray(int arr[],int n)
{
    int start=0;
    int end= n-1;
    while(start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Orginal Array is ";
    printArray(arr,n);
    reverseArray(arr,n);
    cout<<"Reversed Array is ";
    printArray(arr,n);

    return 0;
}
