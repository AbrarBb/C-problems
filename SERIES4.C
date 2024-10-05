//1^3+2^4+3^5+4^6+5^7.......n=?
#include<stdio.h>
int main()
{
    int a,n,b,sum=0;
    printf("Enter The limit:");
    scanf("%d",&n);
    b=3;
    for(a=1;a<=n;a++)
    {
        if(a<n)
        {
            printf("%d^%d + ",a,b);
        }
        else
        {
            printf("%d^%d = %d",a,b,sum);
        }
        sum=sum+(a*b);
        b++;
    }
    return 0;
}

