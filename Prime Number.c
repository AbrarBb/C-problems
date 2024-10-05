#include<stdio.h>
int main()
{
    int a=1,n,count=0;
    printf("Enter The Number:");
    scanf("%d",&n);
    while(a<=n)
    {
        if(n%a==0)
        {
            count++;
        }
        a++;
    }
    if(count==2)
    {
        printf("%d Is a Prime Number",n);
    }
    else
    {
        printf("%d Is Not a Prime Number!",n);
    }
    return 0;
}
