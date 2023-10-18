// title of program 
// program by using different types of opeartors
// header file
#include<stdio.h>
// function heading 
void main()
{
// variable declaration
int a=49,b=35,c=55;
//output statement for AND gate
printf("AND gate=%d\n",(a&b));
// output statement for OR gate
printf("OR gate=%d\n",(a|b));
// output statement for XOR gate
printf("XOR gate=%d\n",(a^b));
// output statement for NOT gate
printf("NOT gate=%d\n",(~a));
// output statement for LEFT shift
printf("LEFT shift=%d\n",(c<<2));
// output statement for RIGHT shift
printf("RIGHT shift=%d\n",(c>>2));
}