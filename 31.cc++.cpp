#include<stdio.h>
int main()
{
    int math,phy,che;
    int total;
    printf("enter Math marks=");
    scanf("%d",&math);
        printf("enter phy marks=");
    scanf("%d",&phy);
        printf("enter che marks=");
    scanf("%d",&che);
    total=math+che+phy;
    if(math>=50 && phy>=45 && che>=60)
    {
        printf("eligible");
    }
    else{
        printf("not eligeble");
    }
}
