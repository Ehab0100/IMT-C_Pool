/**
* C Program to Sort Elements in Lexicographical Order (Dictionary Order)
*
*/
#include <stdio.h>
#define MAX_SIZE 20

/**
* scan_arr: function to scan Characters from users and store them in array
* @size: size of array
* @arr: pointer to array to access the array
*/

void scan_arr(char*arr,int size)
{
    int i;
	printf("Enter %d Character:\n",size);

	for (i=0;i<size;i++)
	{
	    scanf("%c",arr+i);
	    fflush(stdin);
	}
}

/**
* arrange_arr: function to arrange Characters in order
* @size: size of array
* @arr: pointer to array to access the array
*/
void arrange_arr(char*arr,int size)
{
    int i,j,temp;

	for (i=0;i<size-1;i++)
	{
	    for (j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
	}
}

/**
* print_arr: function to print Characters
* @size: size of array
* @arr: pointer to array to access the array
*/
void print_arr(char*arr,int size)
{
    int i;
	printf("Character in order:\n");

	for (i=0;i<size;i++)
	{
	    printf("%c\n",arr[i]);
	}
}

int main()
{
    /* inputs 10 character from user using array & function */
    char arr[MAX_SIZE];
    int size= 10;

    scan_arr(arr,size);

    arrange_arr(arr,size);

    print_arr(arr,size);


    return 0;
}

