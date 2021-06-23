#include<stdio.h>

int main()
{
    int t,s,d,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&s,&d);
        if(s<d || ((s+d)%2!=0))
        {
            printf("impossible\n");
            continue;
        }
        x=(s+d)/2;
        y=s-x;
        printf("%d %d\n",x,y);
    }
    return 0;
}
