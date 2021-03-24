/*write a program to compute the area of triangle using its base and height*/
#include<stdio.h>
void main()
{

float area,base,height;

printf("/nEnter the base of the triangle :");
scanf("%f",&base);

printf("/nEnter the height of the triangle :");
scanf("%f",height);

area = (base * height)/2;

printf("/nThe area of the triangle using base and height :%.2f/n",area);
return 0;
}
