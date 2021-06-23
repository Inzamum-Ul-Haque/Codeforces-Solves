#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N,B,H,W,i,p,j,ans=15000000,bed,cost;
    while(scanf("%d %d %d %d",&N,&B,&H,&W)==4)
    {
        for(i=0; i<H; i++)
        {
            scanf("%d",&p);
            for(j=0; j<W; j++)
            {
                scanf("%d",&bed);
                cost=0;
                if(bed>=N)
                {
                    cost=N*p;
                    if(ans>cost)
                    {
                        ans=cost;
                    }
                }
            }
        }
        if(ans>B)
            printf("stay home\n");
        else
            printf("%d\n",ans);
        ans=15000000;
    }
    return 0;
}
