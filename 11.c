//Gross Salary Calculator
#include<stdio.h>
#include<conio.h>
int main()
{
	int salary,hra,da,ta,grosssalary;
	printf("enter  salary\n :");
	scanf("%d",&salary);
	printf("enter hra\n :");
	scanf("%d",&hra);
	printf("enter da\n :");
	scanf("%d",&da);
	printf("enter ta\n :");
	scanf("%d",&ta);
	grosssalary=salary+hra+da+ta;
	printf("enter grosssalary :%d",grosssalary);
	return 0;
}
