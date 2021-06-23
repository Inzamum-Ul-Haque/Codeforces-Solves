#include<stdio.h>

int main()
{
    int N,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&N)==1)
    {
        sum=0;
        if(N==0)
        {
            break;
        }
        for(i=1; i!=N; i++)
        {
            if((N%i)==0)
            {
                sum+=i;
            }
        }
        if(sum==N)
        {
            printf("%5d  PERFECT\n",N);
        }
        if(sum<N)
        {
            printf("%5d  DEFICIENT\n",N);
        }
        if(sum>N)
        {
            printf("%5d  ABUNDANT\n",N);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
