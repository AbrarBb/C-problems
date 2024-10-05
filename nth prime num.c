#include <stdio.h>

int main() 
{
    int a, b, n, count;

    printf("Limit: ");
    scanf("%d", &n);

    for (a = 1; a <= n; a++) 
    {
        count = 0;  
        for (b = 1; b <= a; b++) 
        {
            if (a % b == 0) 
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("*%d = Prime Number\n", a);
        } 
        else
        {
            printf(" %d = Composite\n", a);
        }
    }

    return 0;
}
