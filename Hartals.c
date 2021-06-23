#include<stdio.h>

int main()
{
    int T,N,i,j,P,temp,darr[3655],b,h[102];
    scanf("%d",&T);
    while(T--)
    {
        int count=0;
        scanf("%d",&N);
        scanf("%d",&P);
        for(i=0; i<P; i++)
        {
            scanf("%d",&h[i]);
        }
        for(j=0; j<=N; j++)
        {
            darr[j]=0;
        }
        for(i=0; i<P; i++)
        {
            for(j=0; j<=N; j+=h[i])
            {
                b=j%7;
                if(b>=1 && b<=5 && darr[j]!=1)
                {
                    count++;
                    darr[j]=1;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
