#include <stdio.h>
int main()
{
    int arr2d[3][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter digits to arr2d= ");
            scanf("%d",&(arr2d[i][j]));
            
        
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            //printf("[%d][%d]",i,j);
            //printf("%d\n",arr2d[i][j]);
           // printf("[%d][%d]=%d\n",i,j,arr2d[i][j]);
            k=arr2d[i][j];
            printf("[%d][%d]=%d\n",i,j,k);
        }
    }
   return 0;
}