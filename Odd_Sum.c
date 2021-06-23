#include<stdio.h>
int main()
{
    int a,b,testCase,i,m,sum;
    while(scanf("%d",&testCase)==1)
    {
        for(i=1; i<=testCase; i++)
        {
            scanf("%d",&a);
            scanf("%d",&b);
            sum=0;
            for(m=a; m<=b; m++)
            {
                if((m%2)==1)
                {
                    sum+=m;
                }
            }
            printf("Case %d: %d\n",i,sum);
        }
    }
    return 0;
}
