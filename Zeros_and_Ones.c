#include<stdio.h>
#include<string.h>

int main()
{
    char A[1000000];
    int a,i,j,query,testCase=1,works,k;
    while(1)
    {
        while(scanf("%s",A)!=EOF)
        {
            if(strcmp(A,"\n")==0)
                break;
            scanf("%d",&query);
            printf("Case %d:\n",testCase);
            for(k=1; k<=query; k++)
            {
                works=1;
                scanf("%d %d",&i,&j);
                if(i==j)
                {
                    printf("Yes\n");
                    continue;
                }
                else if(i>j)
                {
                    for(a=j; a<=i; a++)
                    {
                        if(A[a]!=A[i])
                        {
                            works=0;
                            printf("No\n");
                            break;
                        }
                    }
                }
                else
                {
                    for(a=i; a<=j; a++)
                    {
                        if(A[a]!=A[i])
                        {
                            works=0;
                            printf("No\n");
                            break;
                        }
                    }
                }

                if(works)
                {
                    printf("Yes\n");
                }
            }
            testCase++;
        }
        break;
    }
    return 0;
}
