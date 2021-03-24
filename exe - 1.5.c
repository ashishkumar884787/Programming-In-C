/*write a program that take the radious of circle and display its area and perimeter.*/
#include<stdio.h>
#define PI 3.14f
int main()
{
float rad,area,perm;
printf("Enter the radius of circle");
scanf("%f",&rad);
area = PI * rad * rad;
perm = 2 * PI * rad;
printf("Perimeter of a circle having radius of %0.4f is %f ",rad,perm);
printf("\nArea of a circle having radius of %0.4f ",rad,area);
return 0 ;
}
