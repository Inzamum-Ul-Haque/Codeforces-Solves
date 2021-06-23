#include<stdio.h>

int main()
{
    int N;
    long long reverse,P,num,iter;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%lld",&P);
        iter=0;
        while(1)
        {
            reverse=0;
            num=P;
            while(P!=0)
            {
                reverse=reverse*10;
                reverse=reverse+(P%10);
                P=P/10;
            }
            if(num!=reverse)
            {
                num=num+reverse;
                iter++;
                P=num;
            }
            else
            {
                break;
            }
        }
        printf("%lld %lld\n",iter,reverse);
    }
    return 0;
}
