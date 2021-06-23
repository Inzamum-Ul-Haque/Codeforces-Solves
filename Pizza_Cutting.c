#include<stdio.h>

int main()
{
    long long n,total;
    while(scanf("%lld",&n)==1)
    {
        if(n<0)
        {
            break;
        }
        total=(n*(n+1))/2+1;
        printf("%lld\n",total);
    }
    return 0;
}
