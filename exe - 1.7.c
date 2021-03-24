/*write a program to swap two number without using third variable */
#include<stdio.h>
void main ()
{
int x ,y;
printf("Enter the value of x and y ?");
scanf("%d%d",&x,&y);
printf("before swapping the number : %d  %d/n",x,y);

 /*swapping*/
 x = x+y;
 y = x-y;
 x = x-y;
 printf("After swapping :%d  %d/n",x,y);
 return 0;
}
