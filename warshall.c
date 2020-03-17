#include<stdio.h>
#include<stdlib.h>

int max(int a, int b)
{
	if(a>=b)
		return a;
	else
		return b;
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
				A[i][j]=max(A[i][j], (A[i][k] && A[k][j]));
			}
		}
	}
	printf("transitive closure\n");
	for(i=0; i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",A[i][j]);	
		}
		printf("\n");
	}
}
