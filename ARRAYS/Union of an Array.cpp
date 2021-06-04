#include <iostream>
using namespace std;
 
void printUnion(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
         {
             cout<<arr1[i]<<" ";
             i++;
         }
         
         else if(arr2[j]<arr1[i])
         {
             cout<<arr2[j]<<" ";
             j++;
         }
         else //both elements are common
         {
             cout<<arr2[j]<<" ";
             i++;
             j++;
         }
    }
    
      while (i < m)
        cout << arr1[i++] << " ";
 
    while (j < n)
        cout << arr2[j++] << " ";
  
}
 
int main()
{
    int arr1[] = { 1,2,3,4,5,6};
    int arr2[] = { 5,6,7,8,9,10};
    int n= sizeof(arr1) / sizeof(arr1[0]);
    int m= sizeof(arr2) / sizeof(arr2[0]);
    cout<<"The elements are ";
   printUnion(arr1,arr2,n,m);
 
    return 0;
}