//Write a Program to find the area of a triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	int b,h,area;
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of h:");
	scanf("%d",&h);
	area=0.5*(b*h);
	printf("area of triangle:%d",area);
	return 0;
}
