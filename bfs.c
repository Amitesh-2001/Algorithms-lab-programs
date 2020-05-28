#include <stdio.h>

void bfs(int a[20][20],int source,int visited[20],int n)
{
    int q[20],f,r,u,v;
    f=0,r=-1;
    q[++r]=source;
    while(f<=r){
        u=q[f++];
        for(v=1;v<=n;v++)
        {
            if(a[u][v]==1 && visited[v]==0)
            {
                q[++r]=v;
                visited[v]=1;
            }
        }
    }
}
void main()
{
   int n, a[20][20],i,j,visited[20],source;
   printf("enter the no of vertices\n");
   scanf("%d",&n);
   printf("enter the adj. matrix\n");
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(i=1;i<=n;i++)
   {
       visited[i]=0;
   }
   printf("enter the source node\n");
   scanf("%d",&source);
   visited[source]=1;
   bfs(a,source,visited,n);
   for(i=1;i<=n;i++)
   {
       if(visited[i]!=0)
       {
           printf("node %d is reachable\n",i);
       }
       else
       {
           printf("node %d is not reachable\n",i);
       }
   }
}
