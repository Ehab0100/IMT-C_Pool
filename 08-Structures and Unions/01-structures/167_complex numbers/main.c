/**
* C program that takes two complex numbers as structures
   and adds them with the use of functions.
*/

#include <stdio.h>
/* declare strcture for complex number*/
typedef struct
{
    float real;
    float img;
}complex;
/*prototype of the functions */
void scan_complex(complex*num);
void print_complex(complex*result);
void add_complex(complex*num1,complex*num2,complex*result);

int main()
{
    /* declare 3_structure variables */
    complex num1,num2,result;

    /* input 1st complex number from the user (scan_complex) function*/
    printf("Enter the real & img part of the 1st number: ");
    scan_complex(&num1);

    /* input 2nd complex number from the user using (scan_complex) function */
    printf("Enter the real & img part of the 2nd number: ");
    scan_complex(&num2);

    /* add the 2_complex numbers using (add_complex) function */
    add_complex(&num1,&num2,&result);

    /* print the result complex numbers using (print_complex) function */
    print_complex(&result);

    return 0;
}

/**
* scan_complex - scan the two complex numbers
* @num : comlex numbers
*/
void scan_complex(complex*num)
{
    scanf("%f%f",&num->real,&num->img);
}

/**
* print_complex - print the complex number (result)
* @result : the result of the addition
*/
void print_complex(complex*result)
{
    if(result->real == 0)
        printf("Result= %.2fi \n",result->img);
    else if(result->img == 0)
        printf("Result= %.2f \n",result->real);
    else if(result->img > 0)
        printf("Result= %.2f+%.2fi \n",result->real,result->img);
    else if(result->img < 0)
        printf("Result= %.2f%.2fi \n",result->real,result->img);
}
/**
* add_complex - add two complex numbers
* @num : comlex numbers
* @result : the result of the addition
*/
void add_complex(complex*num1,complex*num2,complex*result)
{
   result->real = num1->real + num2->real ;
   result->img = num1->img + num2->img ;
}
