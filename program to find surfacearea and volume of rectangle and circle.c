// title of program
// program for area and perimeter of circle and rectangle
// header file
#include<stdio.h>
#include<math.h>
// function heading
void main()
{
// variable declaration
float r,h;
// output statement
printf("enter the radius and height");
// input statement
scanf("%f%f",&r,&h);
// variable declaration
float surfacearea,volume;
// input statement formula used
surfacearea=3.14*r*(r+sqrt(h*h+r*r));
volume=0.33*(3.14*r*r*h);
// output statement for area of rectangle
printf("surfacearea of cone=%f\n",surfacearea);
printf("volume of cone=%f\n",volume);
}