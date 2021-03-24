/* Write a program that requests two float type numbers from the user and
then divides the 1st number by the 2nd and displays the result along with the numbers*/
#include<stdio.h>
int main ()
{
float x,y;
printf("Enter two float type number :/n");
scanf("%f",&x);
scanf("%f",&y);
printf("/n%0.4f/%0.4f = %0.4f",x,y,x/y);
return 0;
}
