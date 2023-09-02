#include <stdio.h>

void main()
{
    int i,k,j;
    
    for(i=5;i>=1;i--)
    {
        for(k=4;k>=i;k--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%C ",'a'+j);
        }
        printf("\n");
    }   
    
}

