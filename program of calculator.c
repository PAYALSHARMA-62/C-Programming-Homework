
// title of program
// Program of calculator
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
int x;
// output statement
printf("1=Addition 2=Subtraction 3=Multiplication 4=Division");
// input statement
scanf("%d",&x);
// input statement for if condition
if(x==1)
{
c=a+b;
// output statement
printf("Addition:%d",c);
}
else if(x==2)
{
c=a-b;
// output statement 
printf("Subtraction:%d",c);
}
else if(x==3)
{
c=a*b;
// output statement
printf("Multiplication:%d",c);
}
else if(x==4)
{
if(b==0)
{
// output statement
printf("Infinity");
}
else
{
c=a/b;
// output statement
printf("Division:%d",c);
}
}
}