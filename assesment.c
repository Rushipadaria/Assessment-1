/*
Assesment 1 of c programming
*/

#include<stdio.h>
main()
{
  	int arr1[5][5],arr2[5][5],i,j,arr3[5][5];
  	
  	printf("\n Materix 1 array element \n");
  	for(i=1;i<=2;i++)
  	{
  		for(j=1;j<=2;j++)
  		{
  			printf("Enter Element : ");
  			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\n Display matrix 1 element array value \n");
	for(i=1;i<=2;i++)
  	{
  		for(j=1;j<=2;j++)
  		{
  			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Materix 2 array element \n");
  	for(i=1;i<=2;i++)
  	{
  		for(j=1;j<=2;j++)
  		{
  			printf("Enter Element :");
  			scanf("%d",&arr2[i][j]);
		}
	}
	
	printf("\n Display Matrix 2 element array value \n");
	for(i=1;i<=2;i++)
  	{
  		for(j=1;j<=2;j++)
  		{
  			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Result : Multipication Matrix \n");
	for(i=1;i<=2;i++)
  	{
  		for(j=1;j<=2;j++)
  		{
  			arr3[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
	printf("\nDisplay Both arr element : \n");
	for(i=1;i<=2;i++)
  	{
  		for(j=1;j<=2;j++)
  		{
  			printf("%d\t",arr3[i][j]);
		}
		printf("\n");
	}
}
