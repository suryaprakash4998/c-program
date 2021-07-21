#include<stdio.h>
#include<conio.h>
void main()
{
	int optiona,b;
	printf("1.Addition:");
	printf("2.subraction:");
	printf("3.multiplication:");
	printf("4.division:");
	printf("Enter the option:");
	scanf("%d\n",optiona,b);
	printf("Enter the first number:\n");
	scanf("%d\n",optiona);
	printf("Enter the secound number:\n");
	scanf("%d\n",optionb);
	if(option==1)
	{
		printf("a+b");
	}
	if(option==2)
	{
		printf("a-b");
	}
if(option==3)
	{
		printf("a*b");
	}
	if(option==4)
	{
		printf("a\b");
	}
	if(option>5||option==0)
	{
		printf("no operation found");
	}
}
