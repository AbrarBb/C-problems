#include<stdio.h>
int main()
{
    int a,n,sum=0;
    printf("Enter The Limit :");
    scanf("%d",&n);
    for (a=1;a<=n;a++)
    {
        sum=sum+a*a;
        if(a<n)
        {
            printf(" %d^%d + ",a,a);
        }
        else
        {
            printf("%d^%d = %d",a,a,sum);
        }
    }
    //printf("The Series Sum =%d",sum);
    return 0;
}
