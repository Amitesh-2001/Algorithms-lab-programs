#include <stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int n,i,j,temp;
    clock_t t1,t2;
    double t;
    printf("enter the no. of elements\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        a[i]=rand()%100;
    }
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    t1=clock();
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    t2=clock();
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    t= (double)(t2-t1)/CLOCKS_PER_SEC;
    printf("time taken = %lf",t);
}
