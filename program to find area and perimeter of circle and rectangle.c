// title of program
// program for area and perimeter of circle and rectangle
// header file
#include<stdio.h>
#include<math.h>
// function heading
void main()
{
// variable declaration
int l=44,b=56,area;
float r;
// input statement formula used
area=l*b;
// output statement for area of rectangle
printf("The area of rectangle=%d\n",area);
r=sqrt(area/3.14);
float perimeter;
//input statement formula used
perimeter=3.14*2*r;
// output statement
printf("perimeter of circle=%f\n",perimeter);
}