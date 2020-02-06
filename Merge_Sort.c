
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
        int arr[1000],n,i,low=0,high;
        clock_t t1,t2;
        double t;
        printf("enter the no. of elements\n");
        scanf("%d",&n);
        printf("enter the elements\n");
        for(i=0;i<n;i++)
        {
                arr[i]=rand()%100;
        }
        high=n-1;
        t1=clock();
        mergesort(arr,low,high);
        t2=clock();
        printf("the sorted array is\n");
        for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
        t=(double)(t2-t1)/CLOCKS_PER_SEC;
        printf("time taken = %lf",t);
}

void mergesort(int a[], int l, int h)
{

        if(l<h)
        {
                int m = (l+h)/2;
                mergesort(a,l,m);
                mergesort(a,m+1,h);
                merge(a,l,m,h);
        }
}

void merge(int a[], int l, int m, int h)
{
        int n1= m-l+1;
        int n2= h-m;
        int L[1000],R[1000];
        int i;
        for(i=0;i<n1;i++)
        {
                L[i]=a[l+i];
        }
        for(i=0;i<n2;i++)
        {
                R[i]=a[m+1+i];
        }
         i=0;
        int j=0;
        int  k=l;
        while(i<n1&&j<n2)
        {
                if(L[i]<=R[j])
                {
                        a[k]=L[i];
                        i++;
                }
                else
                {
                        a[k]=R[j];
                        j++;
                }
                k++;
        }
        while(i<n1)
        {
                a[k]=L[i];
                k++;
                i++;
        }
        while(j<n2)
        {
                a[k]=R[j];
                k++;
                j++;
        }
}
