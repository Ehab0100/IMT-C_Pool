/**
*C Program to An electric power distribution company
*  charges its domestic consumers as follows:
*  Consumption Units Rate of Charge
*  0 –200 Rs. 0.50 per unit
*  201 -400 Rs. 100 plus Rs.0.65 per unit excess of 200
*  401 -600 Rs. 230 plus Rs.0.80 per unit excess of 400
*  601 and above Rs. 390 plus Rs.1.00 per unit excess of 600
*
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
    if(customer->units_consumed >=0 && customer->units_consumed <=200)
    {
        customer->pill= customer->units_consumed*0.5 ;
    }
    /* if units less than and equal 400  , charges = 100+0.65*(units-200) */
    else if(customer->units_consumed <=400)
    {
        customer->pill= 100+ (customer->units_consumed-200)*0.65 ;
    }
    /* if units less than and equal 600  , charges = 230+0.8*(units-400) */
    else if(customer->units_consumed <=600)
    {
        customer->pill= 230+ (customer->units_consumed-400)*0.8 ;
    }
    /* if units greater than 600  , charges = 390+(units-600) */
    else if(customer->units_consumed >600)
    {
        customer->pill= 390+ (customer->units_consumed-600);
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
