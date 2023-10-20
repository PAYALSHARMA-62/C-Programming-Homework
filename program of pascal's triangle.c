
// title of program
// Program  of pascal's triangle
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int rows,coef=1,space,i,j;
// output statement
printf("enter the number of rows");
// input statement
scanf("%d",&rows);
// input statement for for condition
for(i=0;i<rows;i++)
{
for(space=1;space<=rows-i;space++)
// output statement
printf(" ");
// input statement for for condition
for(j=0;j<=i;j++)
{
// input statement for if condition
if(j==0||i==0)
coef=1;
else coef=coef*(i-j+1)/j;
// output statement
printf("%4d",coef);
}
// output statement
printf("\n");
}
}


