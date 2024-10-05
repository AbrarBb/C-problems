#include<stdio.h>
int main()
{
    int a,ans,temp,c=1,score=0;
    for (a=7;a<17;a++)
    {
        printf("Prob.%d\n %d + %d =",c,a,a+6);
        scanf("%d",&ans);
        temp=a+(a+6);
        if(ans==temp)
        {
            printf(" Your Answer Is Right\n\n");
            score++;
        }

        else
        {
            printf(" Your Answer Is Wrong!\n %d + %d =%d\n\n",a,a+6,temp);
        }
        c++;

    }
    printf("Your Score Is %d Out Of 10",score);
    return 0;

}
