#include<stdio.h>
int main()
{
    int a,n,ec=0,oc=0; //Even Count :: Odd Count
    printf("Enter The Limit:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
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
    printf("In This Series 1+2+3+4+5+....%d\nHere is %d Even Numbers\n %d Odd Numbers",n,ec,oc);
    //printf("%d Even numb\n %d Odd numb",ec,oc);
}
