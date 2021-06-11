#include <stdio.h>
#include <conio.h>

int main()
{
	int i,n,num,j,arr[20];
	printf("\n Enter the size of the array: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
    printf("\n Enter the NUmber you wanted to insert: ");
    scanf("%d",&num);
    
    for(i=0;i<n;i++)
    {
    	if(arr[i]>num)
    	{
		
    	for(j=n-1;j>=i;j--)
    	{
    		arr[j+1]=arr[j];
		}
    arr[i]=num;
    break;
  }
	}
	n=n+1;
	printf("\n After insertion");
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]= %d",i,arr[i]);
	}

	return 0;
}
