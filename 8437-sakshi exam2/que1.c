// num is positive or negative through ternary operater//
#include <stdio.h>
int main()
{
    int num;

    printf("enter the num:- ");
    scanf("%d", &num);

    num = num < 0 ? printf("the num is nagative") : printf("The num is positive");
}