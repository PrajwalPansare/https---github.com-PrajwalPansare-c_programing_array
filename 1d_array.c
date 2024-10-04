/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*
//array decleration
#include <stdio.h>
int main()
{
    int a[100];
    return 0;
}
*/
/*
//access array element using using for loop
#include <stdio.h>
int main()
{
    int i,mark[5]={10,7,8,4,3};
    for(i=0;i<5;i++)
    {
        printf("youer array element = %d,%d\n",i,mark[i]);
    }
    return 0;
}
*/
/*
//to find the size of arr
#include <stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    int i;
    printf("%ld\n",sizeof(arr)/sizeof(arr[0]));
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int i,length, a[5];
    int sum=0;
    double avg;
    a[2]=10;
    a[3]=20;
    a[4]=30;
    a[1]=40;
    a[0]=70;
    length=(sizeof(a)/sizeof(a[0]));
    printf("size of array= %d\n",length);
    for (i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        printf("%d ",a[i]);
        sum += a[i];
    }
    printf("\ntotal %d\n",sum);
    avg=(double) sum/length;
    
    printf("Average= %.2f\n", avg);
    return 0;
}