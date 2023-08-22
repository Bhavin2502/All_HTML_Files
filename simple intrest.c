#include<stdio.h>
int main()
{
	float amount,rate,time,si;
	printf("enter amount");
	scanf("%f",&amount);
	
	printf("enter rate");
	scanf("%f",&rate);
	
	printf("enter time");
	scanf("%f",&time);
	
	si=amount*rate*time/100;
	printf("simple intrest:%f",si);
	
	return 0;
}
