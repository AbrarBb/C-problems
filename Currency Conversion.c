#include<stdio.h>
int main()
{
    int a,n;
    float cal;
    printf("\n Press 1 To Convert BDT to USD\n Press 2 To Convert USD to BDT\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter Your Amount In BDT:");
        scanf("%f",&cal);
        printf("%.1f BDT = %.1f USD",cal,cal/107);
    }
    else if(n==2)
    {
        printf("Enter Your Amount In USD:");
        scanf("%f",&cal);
        printf("%.1f USD = %.1f BDT",cal,107*cal);
    }
    else
    {
        printf(" Invalid  Choice!");
    }
    return 0;
}
