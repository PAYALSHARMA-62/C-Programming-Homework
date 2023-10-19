
// title of program
// Program using nested if
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int age;
// output statement
printf("enter the age");
// input statement
scanf("%d",&age);
// input statement for if condition
if(age>=18&&age<=50)
{
if(age>=18&&age<=25)
{
// output statement
printf("you are eligible for grade 1 job");
}
else
{
// output statement 
printf("you are eligible for grade 2 job");
}
}
else
{
// output statement
printf("you are eligible for the job");
}
}