/**
 * C program to compute the real roots of the equation:
                 ax2+bx+c=0
 The program will prompt the user to input the values of a, b, and c.
 It then computes the roots of the equation based on rules.
 */

#include <stdio.h>
/* include this library to use the functions(power&square root) */
#include <math.h>

/* declare structure(user difined dta type) to make complex numbers */
typedef struct
{
    float a;
    float b;
}complex;


int main()
{
    int a,b,c,dis;
    float x1=0,x2=0;
    complex com;

    /*input the parameter of second order equation */
    printf("Enter the value of a,b and c respectively\nof the following equation:\n      aX2+bX+c=0\n\n");
    scanf("%i%i%i",&a,&b,&c);

    /* calculate the discrimination */
    dis=pow(b,2)-(4*a*c);
    printf("dis= %i\n\n",dis);

    /* different conditions to solve the equation */
    if(a==0 && b==0)
    {
        printf("No solution\n");
    }
    else if(a==0)
    {
        x1=(-c)/(float)b;
        printf("There is one solution: %.3f\n",x1);
    }
    else if(dis==0)
    {
        x1=(-b)/(float)(2*a);
        printf("There is one solution: %.3f\n",x1);
    }
    else if(dis>0)
    {
        x1=((-b)+sqrt(dis))/(float)(2*a);
        x2=((-b)-sqrt(dis))/(float)(2*a);
        printf("There is two solutions: %.3f,%.3f\n",x1,x2);
    }
    else if(dis<0)
    {
       com.a=(-b)/(float)(2*a);
       com.b=sqrt(-1*(dis))/(float)(2*a);
       printf("there is two solutions: %.3f+%.3f, %.3f-%.3f \n\n",com.a,com.b,com.a,com.b);
    }

    return 0;
}

