#include<iostream>
#include<math.h>

using namespace std;

int getmin(int arr[],int n)
{
	int res=arr[0];
	
	for(int i=0;i<n;i++)
	{
		res= min(res,arr[i]);
	}
	return res;
}
	
int getmax(int arr[],int n)
{
	int res=arr[0];
	for(int i=0;i<n;i++)
	{
		res= max(res,arr[i]);
	}
	return res;
}

int main()
{
	int arr[]={1,2,4,45,12,34,56};
	int n=sizeof(arr)/sizeof(arr[0]);
	int min= getmin(arr,n);
	int max= getmax(arr,n);
	float range = max-min;
	float coeff= range/(max+min);
	cout<<"The range is "<<range<<endl;
	cout<<"The coefficient is "<<coeff ;
	return 0;
	
}
