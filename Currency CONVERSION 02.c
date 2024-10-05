//Currency Conversation//
/*
      1  USD  = 106.30bdt
      1 Ruppe = 1.28 bdt
      1 Pound = 128.83bdt
*/

#include<stdio.h>
int main(void)
{
    int choice;
    float usd,ruppe,pound,bdt;

    printf("|- Enter 1 To Convert USD to BDT -|\n\n|- Enter 2 To Convert RUPPE to BDT -|");
    printf("\n\n|- Enter 3 To Convert POUND to BDT -|\n\n");
    printf("|- Enter 4 To Convert BDT to USD  -|\n\n|- Enter 5 To Convert BDT to RUPPE  -|");
    printf("\n\n|- Enter 6 To Convert BDT to POUND  -|\n\n---:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf(" Enter Amount in DOLLAR :");
        scanf("%f",&usd);
        printf("%.2f$ Is Equal To %.2fBDT\n",usd,(usd*106.30));
    }
    else if(choice==2)
    {
        printf(" Enter Amount in RUPPE :");
        scanf("%f",&ruppe);
        printf("%.2f Ruppe Is Equal To %.2f BDT\n",ruppe,(ruppe*1.28));
    }
    else if(choice==3)
    {
        printf(" Enter Amount in Pound:");
        scanf("%f",&pound);
        printf("%.2f Pound Is Equal To %.2f BDT\n",pound,(pound*128.83));
    }
     else if(choice==4)
    {
        printf(" Enter Amount in BDT:");
        scanf("%f",&bdt);
        printf("%.2f BDT Is Equal To %.2f USD\n",bdt,(bdt/106.30));
    }
     else if(choice==5)
    {
        printf(" Enter Amount in BDT:");
        scanf("%f",&bdt);
        printf("%.2f BDT Is Equal To %.2f Ruppe\n",bdt,(bdt/1.28));
    }
     else if(choice==6)
    {
        printf(" Enter Amount in BDT:");
        scanf("%f",&bdt);
        printf("%.2f BDT Is Equal To %.2f Pound\n",bdt,(bdt/128.83));
    }
    else
    {
        printf("- Wrong Choice -");
    }
    return 0;

}
