#include<stdio.h>
int main()
{
   int n,i,c=0;
   printf("enter number :");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	  if(n%i==0)
   	  {
   	  	c++;
		 }
   }	
   if(c==2){
   	printf("number is prime=%d",n);
   }
   else{
   	printf("number is not prime=%d",n);
   }
}
