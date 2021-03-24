/*Write a program to input a number and print “ODD” if the number is odd and “EVEN” if the number is even.*/

#include<stdio.h>

void main()
{
    int x;

    printf("Enter the value of x : ");
    scanf("%d",&x);

    if(x%2==0)
        printf("\nEVEN\n");

    else
        printf("\nODD\n");

        return 0;
}
