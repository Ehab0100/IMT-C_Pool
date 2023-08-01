/**
 * C program to swap two numbers using bitwise operator
 */

#include <stdio.h>

/* Function declarations */
void swap(int*num1,int*num2);

int main()
{
    /* Input two numbers from user */
    int num1,num2;
    printf("Enter two number: ");
    scanf("%i%i",&num1,&num2);

    /* Print original numbers */
    printf("Original value of number1: %i\n",num1);
    printf("Original value of number2: %i\n\n",num2);

    /* Swap two numbers using swap_function*/
    swap(&num1,&num2);

    /* Print swapped numbers */
    printf("Number1 after swapping: %i\n",num1);
    printf("Number2 after swapping: %i\n\n",num2);

    return 0;
}

/**
 * Function to swap 2_numbers.
 *
 * @num1         pointer to Number1.
 * @num2         pointer to Number2.
 */

void swap(int*num1,int*num2)
{
    /* Swap two numbers */
  *num1 = (*num1)^(*num2) ;
  *num2 = (*num1)^(*num2) ;
  *num1 = (*num1)^(*num2) ;
}

