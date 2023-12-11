#include<stdio.h>
int main()
{
	int i,arr[100],n;
	printf("Enter The number of elements :");
	scanf("%d",&n);
	printf("Enter elements of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array elements are  :");
		for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
return 0;	
}
