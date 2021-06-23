#include<stdio.h>

int main()
{
    int t,A,F,i,j;
    scanf("%d",&t);
    int n=0;
    while(t--)
    {
        scanf("%d",&A);
        scanf("%d",&F);
        int k=0;
        while(F--)
        {
            for(i=1; i<=A; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=A-1; i>=1; i--)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            if(n!=t-1 || k!=F-1)
                printf("\n");
            k++;
        }
        n++;
    }
    return 0;
}
