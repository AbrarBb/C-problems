//1+2+3+4+5.....n=
#include<stdio.h>
int main()
{
    int a=1,n,sum=0;
    printf("Enter The Limit:");
    scanf("%d",&n);
    while(a<=n)
    {
        if(a<n)
        {
             printf("%d + ",a);
        }
       else
       {
           printf("%d = ",a);
       }
       sum=sum+a;
       a++;
    }
    printf("%d",sum);
}
