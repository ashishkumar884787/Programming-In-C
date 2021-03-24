/*
Admission to professional course is subject to the following conditions:

a) Marks in Mathematics >= 60
b) Marks in Physics >= 50
c) Marks in Chemistry >= 40
d) Total in all three subjects >= 200 (OR) Total in Mathematics and Physics >= 150

Write a program that takes as input the marks in three subjects and displays “Admitted” if the student is admitted
else displays “Not Admitted”.*/

#include<stdio.h>
 void main ()
 {
    float M,P,C,MPC,MP;
    /* M,P,C denotes the secured mark in mathmatics,physics,chemistry respectively
    MPC denotes the total mark in all three subject and MP denotes the total mark of mathmatics
    and physics */

    printf("Enter the mark of mathmatics :");
    scanf("%f",&M);

    printf("Enter the mark of physics :");
    scanf("%f",&P);

    printf("Enter of the mark of chemistry :");
    scanf("%f",&C);

    MPC = (M + P + C);
    MP = (M + P);

    if(M >= 60 && P >= 50 && C >= 40 && MPC >= 200  || MP >= 50)
    printf("/n Admitted/n");

    else
    printf("/nNot Admitted/n");

    return 0;
 }
