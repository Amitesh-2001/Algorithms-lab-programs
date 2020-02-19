#include<stdio.h>
#include<time.h>

void main()
{
        int arr[100000],n,i,low=0,high;
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
        quicksort(arr,low,high);
        t2=clock();
        printf("the sorted array is\n");
        for(i=0;i<n;i++)
        {
                printf("%d\n",arr[i]);
        }
        t=(double)(t2-t1)/CLOCKS_PER_SEC;
        printf("time taken = %lf",t);
}

void quicksort(int arr[], int low, int high)
{
        if(low<high)
        {
                int p= partition(arr,low,high);
                quicksort(arr,low,p-1);
                quicksort(arr,p+1,high);
        }
}

int partition(int arr[], int low, int high)
{
        int pivot=arr[high];
        int j, i = low;
        for(j=low; j<high; j++)
        {
                if(arr[j]<pivot)
                {
                        int temp = arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                        i++;
                }

        }
        int temp = arr[high];
        arr[high]=arr[i];
        arr[i]=temp;

        return i;
}
