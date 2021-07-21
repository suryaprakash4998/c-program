#include<stdio.h>
int main()
{
	int curency=5600;
	printf("Enter amount:");
	scanf("%d",&curency);
if((curency/2000)>1)             //((5600/2000)>1)
{
	printf("The number of 2000 notess count");
	curency=curency%2000;         //(5600=5600%2000)
}
else if((curency/500)>1)               //((5600/500)>1)
{
	printf("The number of 500 notess count");
	curency=curency%500;
}
else if((curency/200)>1)               //((5600/200)>1)
{
	printf("The number of 200 notess count:");
	curency=curency%100;
}
}

