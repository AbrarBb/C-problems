#include<stdio.h>
int main()
{
    int a,n,count=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        if(a%n==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d Prime",n);
    }
    else
    {
        printf("%d Composite",n);
    }
}
