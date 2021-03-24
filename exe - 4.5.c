/* An electricity board charges the following rates for the use of electricity.
− For the first 200 units: 80 paise per unit
− For the next 100 units: Rs. 1.30 per unit
− Beyond 300 units: Rs. 2.00 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more that Rs. 400, then
an additional surcharge of 15% of total amount is charged.
Write a program to read the name of a consumer and the number of units consumed and print the charge
with his/her name. */

#include<stdio.h>
#include<conio.h>

  main()
{
        char a[50];

        int b,c,d;

        float amount;

        printf("the consumer name :");
        gets('a');

        printf("the unit charge :");
        scanf("%d",&b);

        if (b<=200)
        {
            amount=b*0.80;
            printf("the amount of unit :%d",amount );

        }

    else
    if (b>=200&&b<=300)
     {
      c=b-200;
      amount=c*1.30+160;

      printf("the amount of unit :%d",amount);
     }
      getch();
    }
