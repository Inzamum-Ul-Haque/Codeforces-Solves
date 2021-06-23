#include<stdio.h>
#include<math.h>

int Mod(long b,long p,long m)
{
    if(p==0)
        return 1;
    if((p%2)==0)
    {
        int c=Mod(b,p/2,m);
        return (c*c)%m;
    }
    else
        return ((b%m)*Mod(b,p-1,m))%m;
}
int main()
{
    int B,P,M,result;
    while(scanf("%d %d %d",&B,&P,&M)==3)
    {
        printf("%d\n",Mod(B,P,M));
    }
    return 0;
}
