#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,c,k;
    int num[3000];
    while(scanf("%d",&n)==1)
    {
        c=0;
        k=n;
        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0; i<n-1; i++,n--)
        {
            if(abs(num[i]-num[i+1])==n-1)
            {
                c++;
            }
        }
        if(c==(k-1))
        {
            printf("Jolly\n");
        }
        else
            printf("Not jolly\n");
    }
    return 0;
}
