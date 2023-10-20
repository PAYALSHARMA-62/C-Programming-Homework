// titleof program
// program to print table of 2 using do while loop
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int i=0,j,k;
// output statement
printf("enter the j value for table to print");
// input statement
scanf("%d",&j);
// condition of do while loop
do
{
k=i*j;
// output statement
printf("%d*%d=%d\n",i,j,k);
++i;
}
while(i<10);
}