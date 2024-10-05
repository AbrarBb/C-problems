// 1/1 + 1/2 + 1/3 + 1/4 .....n=
#include<stdio.h>
int main()
{
    int a,b,n;
    float sum=0;
    float i=1;
    printf("Enter The Limit:");
    scanf("%d",&n);
    printf("Enter Numerator Value:");
    scanf("%d",&b);
    for(a=1;a<=n;a++)
    {
        if(a<n)
        {
            printf("%d/%d + ",b,a);
        }
        else
        {
            printf("%d/%d = ",b,a);
        }
    }
    while(i<=n)
    {
        sum=sum+(1/i);
        i++;
    }
    printf("%.2f",sum);
}
