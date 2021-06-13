

#include <iostream>

using namespace std;

void insertionSort(int arr[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
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
    int arr[]={1,4,6,2,7,10,3,13,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    cout<<endl;
    insertionSort(arr,n);
    printArray(arr,n);
    return 0;
}
