#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,diff1,diff2,c=1;
    while(scanf("%d %d",&a,&b)==2 && a>=0 && b>=0)
    {
            diff1= a+c+(99-b);
            diff2= abs(a-b);
            if(diff1>diff2)
                printf("%d\n",diff2);
            else
                printf("%d\n",diff1);
    }
    return 0;
}
