#include<stdio.h>
#include<stdlib.h>

int min(int a, int b)
{
	if(a>=b)
		return b;
	else
		return a;
}

void main()
{
	int n,i,j,k;
	printf("enter the order of the matrix\n");
	scanf("%d",&n);
	int A[n][n];
	printf("enter the matrix\n");
	for(i=0; i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[i][j]);	
		}
	}
	printf("given matrix\n");
	for(i=0; i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);	
		}
		printf("\n");
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				A[i][j]=min(A[i][j], (A[i][k] + A[k][j]));
			}
		}
	}
	printf("shortest path matrix\n");
	for(i=0; i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);	
		}
		printf("\n");
	}
}
