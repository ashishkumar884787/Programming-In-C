/*Write a program to read a four-digit integer and print the sum of its digits. [Hint: Use /
and % operators.]*/
#include<stdio.h>

   void main()
  {
    int x,n,temp,sum=0;

    printf("Enter an four digit integer : ");
    scanf("%d",&x);

    n=x;

    while(x!=0)
    {
        sum=sum+(x%10);
        x=x/10;
    }

    printf("\nsum of digits of %d is %d",n,sum);
    }
