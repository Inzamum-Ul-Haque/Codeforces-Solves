#include<stdio.h>
#include<string.h>

int main()
{
    int L,i,len,min,d,j;
    char S[200];
    int rp[2000];
    while(scanf("%d",&L)==1)
    {
        min=2000;
        int l=0,c=0;
        getchar();
        if(L==0)
        {
            break;
        }
        gets(S);
        for(i=0;i<L;i++)
        {
            if(S[i]=='Z')
            {
                min=0;
                c=1;
                break;
            }
            if(S[i]=='R')
            {
                rp[l++]=i;
            }
        }
        if(c==0)
        {
            for(i=0;i<L;i++)
            {
                if(S[i]=='D')
                {
                    for(j=0;j<l;j++)
                    {
                        d=abs(i-rp[j]);
                        if(d<min)
                        {
                            min=d;
                        }
                    }
                }
            }
        }
        printf("%d\n",min);
    }
    return 0;
}
