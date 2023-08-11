/**
 * C program to find real & complex roots of the equation:
 *                ax2+bx+c=0
 *  The program will prompt the user to input the values of a, b, and c.
 *  It then computes the roots of the equation based on rules.
 */

#include <stdio.h>
/* include this library to use the functions(power&square root) */
#include <math.h>

/* Define structure(user defined data type) to define complex numbers */
typedef struct
{
    float real,img;
}complex;


int main()
{
    int a,b,c,discriminant;
    float root1=0,root2=0;
    complex complex_num;

    /*input the parameter of second order equation */
    printf("Enter the value of a,b and c respectively\n\
    of the following equation:\n\
                aX2+bX+c=0\n\n");
    scanf("%d%d%d",&a,&b,&c);

    /* calculate the discriminant */
    discriminant=pow(b,2)-(4*a*c);
    printf("discriminant= %d\n\n",discriminant);

    /* different conditions to solve the equation */
    switch((a==0&&b==0)*0 + (a==0)*1 + (discriminant==0)*2 + (discriminant>0)*3 + (discriminant<0)*4)
    {
        case 0:
            printf("No solution\n\n");
            break;

        case 1:
            root1=(-c)/(float)b;
            printf("Two equal and real roots exists: %.3f\n\n",root1);
            break;

        case 2:
            root1=(-b)/(float)(2*a);
            printf("Two equal and real roots exists: %.3f\n",root1);
            break;

        case 3:
            root1=((-b)-sqrt(discriminant))/(float)(2*a);
            root2=((-b)+sqrt(discriminant))/(float)(2*a);
            printf("Two distinct and real roots exists: %.3f , %.3f\n",root1,root2);
            break;

        case 4:
            complex_num.real=(-b)/(float)(2*a);
            complex_num.img=sqrt(-discriminant)/(float)(2*a);
            printf("Two distinct complex roots exists: %.3f+%.3fj , %.3f-%.3fj \n\n"
              ,complex_num.real,complex_num.img,complex_num.real,complex_num.img);
            break;
    }


    return 0;
}

