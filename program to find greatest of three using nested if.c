
// title of program
// Program to find greatest of three using nested if
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int a,b,c;
// output statement
printf("enter the numbers");
// input statement
scanf("%d%d%d",&a,&b,&c);
// input statement for if condition
if(c<a||c<b)
{
if(b<a)
{
// output statement
printf("a is greatest");
}
else
{
// output statement 
printf("b is greatest");
}
}
else
{
// output statement
printf("c is greatest");
}
}