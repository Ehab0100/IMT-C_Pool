/**
* Write c program to Calculate Difference Between Two
   Time Periods using structurs.
*/


#include <stdio.h>
/* declare structure for time period */
typedef struct
{
    int hrs,min,sec;
}time;

/* prototype of the functions */
void scan_time(time*ptr);
void print_time_difference(time*start,time*stop,time*period);
void get_time_difference(time*start,time*stop,time*period);

int main()
{
    /* declare 3_structures variables for time periods */
    time start,stop,period;

    /* input start period from the user */
    printf("Enter start time:\n");
    scan_time(&start);

     /* input stop period from the user */
    printf("Enter stop time:\n");
    scan_time(&stop);

    /* get time difference using function & store it in period variable */
    get_time_difference(&start,&stop,&period);

    /* print the time difference */
    print_time_difference(&start,&stop,&period);

    return 0;
}

/**
* scan_time - function to scan period from the user
* @ptr : pointer to structure
*/

void scan_time(time*ptr)
{
    printf("Enter hours,minutes and seconds respectively: ");
    scanf("%i%i%i",&ptr->hrs,&ptr->min,&ptr->sec);
}

/**
* print_time_difference - function to print difference period
* @start,stop,period : pointers to structure
*/

void print_time_difference(time*start,time*stop,time*period)
{
    printf("TIME DIFFERENCE= %i:%i:%i ",start->hrs,start->min,start->sec);
    printf("- %i:%i:%i = %i:%i:%i \n\n",stop->hrs,stop->min,stop->sec,period->hrs,period->min,period->sec);
}

/**
* get_time_difference - function to get difference period
* @start,stop,period : pointers to structure
*/

void get_time_difference(time*start,time*stop,time*period)
{
   if(stop->sec > start->sec)
    {
        start->min--;
        start->sec += 60;
    }

    period->sec = start->sec - stop->sec;

    if(stop->min > start->min)
    {
        --start->hrs;
        start->min += 60;
    }

    period->min = start->min - stop->min;
    period->hrs = start->hrs - stop->hrs;
}

