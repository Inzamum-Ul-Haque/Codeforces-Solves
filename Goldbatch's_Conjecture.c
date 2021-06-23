#include<stdio.h>
#include<math.h>

int Prime(int i)
{
    if(i==3)
        return 1;
    int flag=1,j,a;
    a=sqrt(i)+1;
    for(j=2;j<=a;j++)
    {
        if(i%j==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
        return 0;
    else
        return 1;
}
int main()
{
    int n,i;
    while(scanf("%d",&n) && n)
    {
        for(i=3; i<n-2; i++)
        {
            if(Prime(i)==1)
            {
                if(Prime(n-i)==1)
                {
                    printf("%d = %d + %d\n",n,i,n-i);
                    break;
                }
            }
        }
    }
    return 0;
}
