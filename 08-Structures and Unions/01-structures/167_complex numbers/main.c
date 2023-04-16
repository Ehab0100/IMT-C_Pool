/***************************************************************************************/
/****************************  IMT School Training Center ******************************/
/***************************************************************************************/
/** This file is developed by IMT School training center, All copyrights are reserved **/
/***************************************************************************************/


#include <stdio.h>
/* create struct */
typedef struct complex
{
    float real;
    float imag;
} complex;

/*prototype to add function */
complex add(complex n1,complex n2);

int main()
{ 
    /* define three complex struct*/    
    complex n1, n2, temp;

    /* input 1st complex number from user  */
    printf("For 1st complex number \n");
    /* input real and imaginary part from user */
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    /* input 2nd complex number from user  */
    printf("\nFor 2nd complex number \n");
    /* input real and imaginary part from user */
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);

    /* call add function */
    temp = add(n1, n2);
  
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;
}


/* function add implementation */
complex add(complex n1, complex n2)
{
      /* define object from complex */ 
      complex temp;

      
      temp.real = n1.real + n2.real;
      temp.imag = n1.imag + n2.imag;

      return(temp);
}