//find max num from a matrix in 1D array//
#include<stdio.h>
int main()
{
    int a[3],i,row,col,size,max;

    printf("enter the row:- ");
    scanf("%d",&row);

    printf("enter the col:- ");
    scanf("%d",&col);

    size=row*col;

    printf("enter the element of matrix\n");


    for(i=0;i<size;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);     
    }

    max=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }   
    printf("max is:- %d ",max);
}