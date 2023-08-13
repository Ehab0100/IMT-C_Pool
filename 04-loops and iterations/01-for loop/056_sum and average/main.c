/**
* C program to read 10 numbers from user and find their sum and average
*
*/
#include <stdio.h>
#define MAX_SIZE 20

/**
* scan_arr: function to scan 10 numbers from users using array
* @size: size of array
* @arr: pointer to array to access the array
*/

void scan_arr(int*arr,int size)
{
    int i;
	printf("Enter %d numbers: ",size);

	for (i=0;i<size;i++)
	{
	    scanf("%d",arr+i);
	}
}

int main()
{
    /* inputs 10 numbers from user using function */
    int arr[MAX_SIZE];
    int size=10;
    scan_arr(arr,size);


    int i,sum=0;
    float average;

	for (i=0;i<size;i++)
	{
	    /* calculate the sum of numbers */
	    sum+=arr[i];
	}
	/* calculate the average of numbers */
	average= (float)sum/size;
    /* print the sum */
    printf("Sum of %d numbers is: %d\n",size,sum);
    printf("The average is:%.2f \n\n",average);

    return 0;
}

