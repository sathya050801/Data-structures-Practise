

#include <iostream>

using namespace std;

int sumOfArray(int arr[],int n)
{
   int sum=0;
   for(int i=0;i<n;i++)
     sum=sum+arr[i];
     
    return sum;
}

int main()
{
    int arr[]={1,3,5,7,9,11,13,15};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The sum of array is "<<sumOfArray(arr,n)<<endl;
    int mean= float(sumOfArray(arr,n))/n;
    cout<<"The mean of array is "<<mean;
    return 0;
}
