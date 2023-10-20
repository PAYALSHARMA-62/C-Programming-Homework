// title of program
// program to find sum using switch case
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int sum=10,n=2;
// condition for switch case
switch(n)
{
case 1:
sum=sum+9;
break;
case 2:
sum=sum+8;
break;
case 5:
sum=sum+7;
break;
case 9:
sum=sum+6;
break;
default:
sum=sum-5;
}
printf("sum=%d",sum);
}