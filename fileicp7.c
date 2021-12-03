/*
Author: Dev Soni
Date: 1/12/21
Description: Program to display digits in word format
*/

#include <stdio.h>
void main()
{
    int num, quotient, remainder, ans, cnt;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");
    quotient=num/10;
    remainder=num%10;
    ans=remainder;

    for(cnt=1; quotient>0; cnt++)
    {
        ans=ans*10;
        remainder=quotient%10;
        ans=ans+remainder;
        quotient=quotient/10;

    }
    fflush(stdin);
    /*printf("\nans= %d", ans);

    printf("\n quotient= %d", quotient);
    */
    quotient=ans;
    printf("%d in words is: ", num);

    for(cnt=1; quotient>0; cnt++)
    {
        ans=ans%10;
        switch(ans)
        {
            case 1:
                printf("One ");
                break;

            case 2:
                printf("Two ");
                break;

            case 3:
                printf("Three ");
                break;

            case 4:
                printf("Four ");
                break;

            case 5:
                printf("Five ");
                break;

            case 6:
                printf("Six ");
                break;

            case 7:
                printf("Seven ");
                break;

            case 8:
                printf("Eight ");
                break;

            case 9:
                printf("Nine ");
                break;

            default:
                printf("Zero ");
        }
        quotient=quotient/10;
        ans=quotient;
    }
}
