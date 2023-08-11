/**
 * C Program to Make a Simple Calculator Using switch case
 */

#include <stdio.h>

int main()
{
    /* Input two numbers from user */
    int num1,num2;
    printf("Enter two operands: ");
    scanf("%d%d",&num1,&num2);

    /* Input an operator from user */
    char operation;
    printf("Enter an operator(+, -, *,/,%): ");
    /* Clear input buffer to avoid taking Enter as character */
    fflush(stdin);
    scanf("%c",&operation);

    /* define result to assign the result of operation & initialize it with -1
       so that when no assignment occurs (num2==0 in division) we check result value */
    float result=-1;

    switch(operation)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            if(num2!=0)
                result=(float)num1/num2;
            break;

        case '%':
            result=num1%num2;
            break;

        default:
            printf("Wrong operation\n\n");
    }

    if(result==-1)
       printf("Can't divide by Zero\n\n");
    else
        printf("%d %c %d = %.3f \n\n",num1,operation,num2,result);


    return 0;
}
