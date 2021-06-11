#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n ,arr[20],largest,second_largest;  
	printf("\n The total no. of element in the array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	largest= arr[0];
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>largest)
		{
			largest=arr[i];
		}
}
	second_largest= arr[0];
	
	for(i=0;i<n;i++)
	{
	    if(arr[i] != largest)	
	    {
		  if(arr[i]>second_largest)
		  {
		  	second_largest= arr[i];
		  }
	    }
	 
	}
	printf("\n %d",largest);
	 printf("\n %d",second_largest);		
	
	return 0;
	
}
