//Write a Program to find the area of a circle.
#include<stdio.h>
#include<conio.h>
int main()
{
	float r,area;
	const float pi=3.14;
	printf("enter the radius of circle:");
	scanf("%f",&r);
    area=pi*r*r;
    printf("area of circle:%f",area);
	return 0;
}

