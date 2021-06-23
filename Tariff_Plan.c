#include<stdio.h>
int main()
{
    int testCase,Case=1,N,call[2000],i,mile,juice,num=1;
    scanf("%d",&testCase);
    while(testCase--)
    {
        mile=0;
        juice=0;
        scanf("%d",&N);
        for(i=0; i<N; i++)
        {
            scanf("%d",&call[i]);
        }
        for(i=0; i<N; i++)
        {
            mile+=(call[i]/30)*10;
            if((call[i]%30)>=0 && (call[i]%30)<30)
            {
                mile+=10;
            }
        }
        for(i=0; i<N; i++)
        {
            juice+=(call[i]/60)*15;
            if((call[i]%60)>=0 && (call[i]%60)<60)
            {
                juice+=15;
            }
        }
        if(mile>juice)
            printf("Case %d: Juice %d\n",num,juice);
        else if(mile==juice)
            printf("Case %d: Mile Juice %d\n",num,mile);
        else
            printf("Case %d: Mile %d\n",num,mile);
        num++;
    }
    return 0;
}
