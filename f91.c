#include<stdio.h>

long long f91(int N);

int main()
{
    long long N;
    long long n;
    while(scanf("%lld",&N))
    {
        if(N==0)
        {
            break;
        }
        n=f91(N);
        printf("f91(%lld) = %lld\n",N,n);
    }
    return 0;
}

long long f91(int N)
{
    if(N<=100)
    {
        return f91(f91(N+11));
    }
    if(N>=101)
    {
        return N-10;
    }
}
