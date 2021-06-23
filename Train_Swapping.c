#include<stdio.h>

int main()
{
    int N,L,P[55],i;
    int temp,t;
    scanf("%d",&N);
    while(N--)
    {
        int swaps=0;
        scanf("%d",&L);
        for(i=0; i<L; i++)
        {
            scanf("%d",&P[i]);
        }
        int k=L;
        while(k!=0)
        {
            t=0;
            for(i=0; i<=L-2; i++)
            {
                if(P[i]>P[i+1])
                {
                    temp=P[i];
                    P[i]=P[i+1];
                    P[i+1]=temp;
                    t=i;
                    swaps++;
                }
            }
            k=t;
        }
        printf("Optimal train swapping takes %d swaps.\n",swaps);
    }
    return 0;
}
