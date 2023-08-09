/**
* C program to input electricity unit charge and calculate the
*   total electricity bill according to the given condition:
*   For first 50 units Rs. 0.50/unit
*   For next 100 units Rs. 0.75/unit
*   For next 100 units Rs. 1.20/unit
*   For unit above 250 Rs. 1.50/unit
*   An additional surcharge of 20% is added to the bill.
*
*/

#include <stdio.h>
/* define structure to define customer */
typedef struct
{
    int number;
    float units_consumed,pill;
}data;

/**
* calculate_pill : function that calculate the charges
*@customer : pointer to structure variable to access structure variable's members
*
*/
void calculate_pill(data*customer)
{
    /* if units less than and equal 200 , charges = 0.5*units */
    if(customer->units_consumed >=0 && customer->units_consumed <=50)
    {
        customer->pill= (customer->units_consumed*0.5)*1.2 ;
    }
    /* if units less than and equal 400  , charges = 100+0.65*(units-200) */
    else if(customer->units_consumed <=150)
    {
        customer->pill= (50*0.5 + (customer->units_consumed-50)*0.75)*1.2 ;
    }
    /* if units less than and equal 600  , charges = 230+0.8*(units-400) */
    else if(customer->units_consumed <=250)
    {
        customer->pill= (50*0.5 + 100*0.75 + (customer->units_consumed-150)*1.2)*1.2 ;
    }
    /* if units greater than 600  , charges = 390+(units-600) */
    else if(customer->units_consumed >250)
    {
        customer->pill= ((customer->units_consumed)*105)*1.2 ;
    }
    else
        printf("Enter positive nomber\n\n");
}

int main()
{
    /* define structure variable*/
    data customer;
    /* Input customer number & consumed units from user */
    printf("Enter Customer NO. & Units Consumed: \n");
    scanf("%d%f",&customer.number,&customer.units_consumed);

    calculate_pill(&customer);

    printf("Customer NO. : %d\nCharges: %.2f\n\n",customer.number,customer.pill);


    return 0;
}
