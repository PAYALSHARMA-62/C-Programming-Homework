
// title of program
// Program of operator precedence
// header file
#include<stdio.h>
// function heading
void main()
{
// variable declaration
int a=5,b=10,c=15;
int result1,result2,result3,result4;
// input statements
result1=a+b*c;
result2=(a+b)*c;
result3=a-b/c;
result4=(a-b)/c;
// output statement
printf("%d\n",result1);
printf("%d\n",result2);
printf("%d\n",result3);
printf("%d\n",result4);
}
