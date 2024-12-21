// calculator using switch case//

#include <stdio.h>
int main()
{
    int num1, num2, choice;

    printf("enter the num1:- ");
    scanf("%d",&num1);

    printf("enter the num2:- ");
    scanf("%d",&num2);

    printf("\npress 1 for +");
    printf("\npress 2 for -");
    printf("\npress 3 for *");
    printf("\npress 4 for /");
    printf("\npress 5 for %%");

    printf("\n enter the choice :- ");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            printf("%d + %d = %d\n", num1, num2, num1+num2);
            break;
        case 2:
            printf("%d - %d = %d\n", num1, num2, num1-num2);
            break;
        case 3:
            printf("%d * %d = %d\n", num1, num2, num1*num2);
            break;
        case 4:
            if (num2 != 0)
            {
                printf("%d / %d = %d\n", num1, num2, num1/num2);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            if (num2 != 0) 
            {
                printf("%d %% %d = %d\n", num1, num2, num1%num2);
            }
             else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Wrong choice\n");
            break;
    
   
    }
}