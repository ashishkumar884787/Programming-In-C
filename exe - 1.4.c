/*write a program to enter the temperature in degree celcius and its display it in fahernheit and vice-versa.
[note: C = (5.0/9.0 * (F - 32))].*/
#include <stdio.h>
 void main ()
 {
 float celsius,fahrenheit;

 //converting fahrenheit to celsius
 printf("Enter the temperaturein celsius : ");
 scanf("%f",&celsius);
 fahrenheit = (celsius * 9.0/5.0)+ 32.0;
 printf("The temperature in fahrenheit is %0.4f 'F: ",fahrenheit);

 //converting celsius to fahrenheit
 printf("\nEnter the temperature in fahrenheit : ");
 scanf("%f",&fahrenheit);
 celsius = (fahrenheit -32.0)*5.0/9.0;
 printf("The temperature in celsius is %0.4f 'c:",celsius);
 return 0;
 }
