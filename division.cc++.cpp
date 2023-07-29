#include<stdio.h>
int main()
{
    int number1,number2,division;
    printf("enter first number:");
    scanf("%d",&number1);
    printf("enter second number;");
    scanf("%d",&number2);
    division=number1/number2;
    printf("%d/%d=%d",number1,number2,division);
    return 0;
}
