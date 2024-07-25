//Triangle Angle Finder
#include<stdio.h>
#include<conio.h>
int main()
{
	int first,second,third,triangle;
	printf("enter first\n :");
	scanf("%d",&first);
	printf("enter second\n :");
	scanf("%d",&second);
	triangle=180;
	third=triangle-(first+second);
	printf("enter third :%d",third);
	return 0;
}
