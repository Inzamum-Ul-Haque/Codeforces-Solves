#include<stdio.h>
int main()
{
    long long m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m<n)
        {
            printf("%lld\n",n-m);
        }
        else
            printf("%lld\n",m-n);
    }
    return 0;
}
