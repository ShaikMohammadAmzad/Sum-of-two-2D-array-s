#include<stdio.h>
main()
{
	int i,j;
	int arr[3][3];
	int arr1[3][3];
	int arr2[3][3];
	// taking elements from the user 
	printf("Enter the elements for arr:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	printf("Enter the elements for arr1:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("The elements of arr are:-\n");
	// printing the elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\nThe elements of arr1 are:-\n");
	// printing the elements
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("the sum of the elements of arr & arr1:-\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr2[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
		
}
