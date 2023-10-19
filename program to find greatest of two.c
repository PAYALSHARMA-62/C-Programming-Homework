// title of program
// Program for finding greatest of two
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int a,b,big;
// output statement
printf("enter two numbers");
// input statement
scanf("%d%d",&a,&b);
// condition for ternary operator
big=a>b?a:b;
// output statement
printf("the greatest of two is=%d",big);
}
