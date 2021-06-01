// C++ program to print common elements in three arrays
#include <bits/stdc++.h>
using namespace std;
	
void threeLargest(int arr[],int n)
{
int first,second,third;
first=second=third=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>first)
    {
    	third=second;
    	second=first;
    	first=arr[i];
	}
	
	else if(arr[i]>second)
	{
		third=second;
		second=arr[i];
	}
	
	else
	{
		third=arr[i];
	}
}
	
	cout<<"The three largest elements are "<<first<<" "<<second<<" "<<third;
}

 
// Driver code
int main()
{
  int arr[]={1,23,12,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  threeLargest(arr,n);
      return 0;
}
