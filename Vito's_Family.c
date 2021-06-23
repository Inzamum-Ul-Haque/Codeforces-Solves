#include<stdio.h>
#include<stdlib.h>
int main()
{
    int test,r,s[300000],i,j,k,temp,sum,t;
    scanf("%d",&test);
    while(test--)
    {
        int p=5000000;
        scanf("%d",&r);
        for(i=1; i<=r; i++)
        {
            scanf("%d",&s[i]);
        }
        for(j=r; j>=2; j--)
        {
            t=1;
            for(k=2; k<=j; k++)
            {
                if(s[t]<s[k])
                {
                    t=k;
                }
            }
            temp=s[j];
            s[j]=s[t];
            s[t]=temp;
        }

        for(i=1;i<=r;i++)
        {
            sum=0;
            for(j=1;j<=r;j++)
            {
                sum+=abs(s[i]-s[j]);
            }
            if(sum<p)
            {
                p=sum;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
