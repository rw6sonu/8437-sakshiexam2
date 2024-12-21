//cube using function//
#include<stdio.h>
int cube(int num)
{
    int cube;
    cube=num*num*num;
    return cube;
}

int main()
{
    int num,c;
    printf("Enter a number: ");
    scanf("%d",&num);

    c=cube(num);

    printf("cube is:-%d \n ",c);
}