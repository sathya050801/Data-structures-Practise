#include<iostream>

using namespace std;

void segregate(int arr[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
    while(arr[left]<0 && left<right)
    {
    	  left++;
	}
   
    
    while(arr[right]>0&& left<right)
    {
    	 right--;
	}
    
     
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
     
}

int main() 
{
    int arr[]={-1,3,4,-2,1,-5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    segregate(arr,n);
    cout<<"The segregated array is ";
    printArray(arr,n);
    return 0;
}
