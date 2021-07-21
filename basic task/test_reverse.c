#include<stdio.h>
int main()
{
	int a=1234;
	
	
	printf("The number is %d\n",a/1000);
	printf("The number is %d\n",(a%1000)/100);
	printf("The number is %d\n",(a%100)/10);
	printf("The number is %d\n",a%10);
}
