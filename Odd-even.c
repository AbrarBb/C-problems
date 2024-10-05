#include<stdio.h>
int main()
{
    int a=1,n,od,e;
    printf("\nEnter The Limit :");
    scanf("%d",&n);
    while(a<=n)
    {
        if(a%2==0)
        {
            printf("%d Even\n",a);
            e++;
        }
        else
        {
            printf("%d Odd\n",a);
            od++;
        }
        a++;
    }
    printf("Total Even Numbers = %d\nTotal Odd Numbers = %d",e,od);
    return 0;
}
