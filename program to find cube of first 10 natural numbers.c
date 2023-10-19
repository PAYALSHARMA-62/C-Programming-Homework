// title of program
// Program to find cube of first 10 natural numbers using for loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int i,number,cube;
// output statement
printf("enter the number");
//input statement
scanf("%d",&number);
// condition of for loop
for(i=1;i<=10;i++)
{
// input statement for cube
cube=i*i*i;
// output statement
printf("%d=%d\n",i,cube);
}
}
