#include<stdio.h>

int main()
{
    int C,N,grade[1005],i,sum,b;
    int avg;
    float ans;
    scanf("%d",&C);
    while(C--)
    {
        sum=0;
        b=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)
        {
            scanf("%d",&grade[i]);
        }
        for(i=0;i<N;i++)
        {
            sum=sum+grade[i];
        }
        avg=sum/N;
        for(i=0;i<N;i++)
        {
            if(grade[i]>avg)
            {
                b++;
            }
        }
        ans=((float)b/(float)N)*100;
        printf("%.3f%%\n",ans);
    }
    return 0;
}
