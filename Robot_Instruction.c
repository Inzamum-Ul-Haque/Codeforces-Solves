#include<stdio.h>
int main()
{
    int testCase,n,i,j,p,b[100];
    char inst[1000];
    while(scanf("%d",&testCase)==1)
    {
        while(testCase--)
        {
            p=0;
            scanf("%d",&n);
            for(i=1; i<=n; i++)
            {
                scanf("%s",inst);
                if(strcmp(inst,"LEFT")==0)
                {
                    p-=1;
                    b[i]=-1;
                }
                else if(strcmp(inst,"RIGHT")==0)
                {
                    p+=1;
                    b[i]=1;
                }
                else
                {
                    scanf("%s %d",inst,&j);
                    p+=b[j];
                    b[i]=b[j];
                }
            }
            printf("%d\n",p);
        }
    }
    return 0;
}
