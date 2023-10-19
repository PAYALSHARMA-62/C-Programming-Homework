// title of program
// program to find the quality of apsara pencil
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int mark;
// output statement
printf("enter the marks");
// input statement
scanf("%d",&mark);
// char declaration
char ch;
// output statement
printf("enter handwriting is good or bad");
// input statement
scanf("%c%c",&ch,&ch);
// input staetment if condition
if(ch=='Y'||ch=='y')
{
mark=mark+10;
}
// output statement
printf("your mark is%d",mark);
} 
