#include<stdio.h>
#include<conio.h>>
int main()
{
	int x,y,z;
	printf("enter x :");
	scanf("%d",&x);
	printf("enter y :");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("x :%d\n",x);
	printf("y :%d\n",y);
	return 0;
}
