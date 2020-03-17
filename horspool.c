#include<stdio.h>
#include<stdlib.h>
#define MAX 128

int S[MAX];
void shiftTable(char P[])
{
	int m=strlen(P);
	int i,j;
	for(i=0;i<MAX;i++)
	{
		S[i]=m;
	}
	for(j=0;j<m-1;j++)
	{
		S[P[j]]=m-1-j;
	}
}

int Horspool(char P[], char t[])
{
	int m= strlen(P);
	int n =strlen(t);
	int i=m-1;
	while(i<n)
	{
		int k=0;
		while((k<=m-1)&&(t[i-k]==P[m-1-k]))
		{
			k=k+1;
		}
		if(k==m)
			return i-m+1;
		else
			i=i+S[t[i]];
	}
	return -1;
}

void main()
{
	char t[100], P[100];
	printf("enter the text string\n");
	gets(t);
	printf("enter the pattern string\n");
	gets(P);
	shiftTable(P);
	int pos= Horspool(P,t);
	if(pos>=0)
	{
		printf("the given string is found at %d",pos+1);
	}
	else{
		printf("string not found\n");
	}
}
