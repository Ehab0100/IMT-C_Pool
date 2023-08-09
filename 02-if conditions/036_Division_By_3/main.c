#include <stdio.h>
/**
* scan_array: Function to scan numbers from users & store it in array
*@arr: pointer to int to access the array
*@size: size of the array
*
*/

void scan_array(int*arr,int size)
{
    printf("Enter %d Numbers: ",size);

    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
}

int main()
{
    /* Input 5 numbers from user using array */
    int size=5;
    int arr[size];

    scan_array(arr,size);

    printf("The numbers that is divisible by 3 are:");

    /* check if the numbers are divisible by 3 */
    int i;
    for(i=0;i<size;i++)
    {
        if(arr[i]%3==0)
            printf(" %d",arr[i]);
    }
    printf("\n\n");

    return 0;
}
