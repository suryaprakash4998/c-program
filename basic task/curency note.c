#include<stdio.h>
int main()
{
	int curency=5600;
	printf("Enter amount:");
	scanf("%d\n",curency);
if((curency/2000)>1)
{
	printf("2000 notes count:");
	curency=curency%2000;
}
if(curency/500>1)
{
	printf("500 notes count:");
	curency=curency%500;
}
if(curency/200>1)
{
	printf("100 notes count:");
	curency=curency%100;
}
}

