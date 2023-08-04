#include<stdio.h>
int main()
{
	float radius,area,pi=3.14;
	printf("Enter radius of circle:");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("Area of circle:%f",area);
	return 0;
}
