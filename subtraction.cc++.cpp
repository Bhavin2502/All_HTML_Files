#include<stdio.h>
int main()
{
    int number1,number2,sub;
    printf("enter first number:");
    scanf("%d",&number1);
    printf("enter second number;");
    scanf("%d",&number2);
    sub=number1-number2;
    printf("%d-%d=%d",number1,number2,sub);
    return 0;
}
