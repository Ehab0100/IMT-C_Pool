/**
*  C program to display the Fibonacci sequence of first n numbers (entered by the user) using loop.
*
*/
#include <stdio.h>
#define MAX_SIZE 20

int main()
{
    /* input number of terms from user */
    int n;
    printf("Input the numbers of terms: ");
    scanf("%d",&n);

    /* define array to store vale of Fibonacci series */
    int fib[MAX_SIZE];
    fib[0]=0;
    fib[1]=1;

    int i;
    printf("Fibonacci series: ");
	for (i=0;i<n;i++)
	{
	    if(i==0 || i==1)
        {
           printf("%d ",fib[i]);
        }
        else
        {
            fib[i]=fib[i-1]+fib[i-2];
	        printf("%d ",fib[i]);
        }
	}
	printf("\n\n");

    return 0;
}

