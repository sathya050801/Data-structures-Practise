

#include <iostream>
using namespace std;

void swap(int arr1[],int arr2[])
{
    int temp = arr1[10];
    arr1[10]= arr2[10];
    arr2[10]= arr1[10];
}

int partition(int arr[],int lb,int hb)
{
  int pivot=arr[lb];
  int start = lb;
  int end = hb;
  while(start<end)
  {
      while(arr[start]<=pivot)
      {
          start++;
      }
      
      while(arr[end]>pivot)
      {
          end--;
      }
      
      if(start<end)
      {
          swap(arr[start],arr[end]);
      }
  }
  swap(arr[lb],arr[end]);
  return end;
}

void quickSort(int arr[],int lb,int hb)
{
    if(lb<hb)
    {
        int loc= partition(arr,lb,hb);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,hb);
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
    int arr[]={1,9,2,8,3,7,4,6,5};
    printArray(arr,9);
    quickSort(arr,0,8);
    printArray(arr,9);

    return 0;
}
