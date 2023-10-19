// title of program
// Program for finding greatest of three
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int a,b,c,big;
// output statement
printf("enter three numbers");
// input statement
scanf("%d%d%d",&a,&b,&c);
// condition for ternary operator
big=a>b?(a>c?a:c):(b>c?b:c);
// output statement
printf("the greatest of three is=%d\n",big);
}
