//1 + 2 + 4 + 6 + 8 ........+ 500; now can you find how many even numbers?
#include<stdio.h>
int main()
{
    int a,n,ec=0,oc=0,sum=0;
    printf("Enter The Limit Of The Series :");
    scanf("%d",&n);
    for(a=2;a<=n;a=a+2)
    {
        if(a%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    a=2;
    while(a<=n)
    {
        if(a<n)
        {
            printf("%d + ",a);
        }
        else
        {
            printf("%d = %d",a,sum);
        }
        sum=sum+a;
        a=a+2;
    }


    printf("%d Even Numbers\n%d Odd Numbers",ec,oc);
    return 0;
}
