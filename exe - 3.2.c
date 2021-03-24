/*Write a program to take a number as input and check whether it is even or odd using
conditional operator (do not use if statement).*/

#include<stdio.h>
int main()
{
	int x;

	printf("Enter the value of x : ");
	scanf("%d",&x);

	(x%2 == 0)?printf("Xis an EVEN number"):printf("Xis an ODD number");
	return 0;
}
