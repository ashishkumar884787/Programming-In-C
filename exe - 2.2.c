/*write a program to compute simple simple and compound interest*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
  void main ()
  {
  float p,t,r,ci,si;

  printf("Enter princpal amount (p) :");
  scanf("%f",&p);

  printf("Enter time of  year (t) :");
  scanf("%f",&t);

  printf("Enter rate in percent (r) :");
  scanf("%f",&r);

  /*calculate simple interest*/
  si = (p * t * r)/100.0;

  /*calculate compound interest*/
  ci = p * (pow(1+r/100 , t) - 1);

  printf("simple interest = 0.3%f/n",si);
  printf("compound interest = 0.3%f",ci);
  getch();
  return 0;
  }
