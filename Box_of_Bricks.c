#include<stdio.h>

int main()
{
    int n,h[55],i,H,avgH,moves,j=1;
    while(scanf("%d",&n)==1 && n!=0)
    {
        moves=0;
        H=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            H=H+h[i];
        }
        avgH=H/n;
        for(i=0;i<n;i++)
        {
            if(h[i]>avgH)
            {
                moves=moves+(h[i]-avgH);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,moves);
        j++;
    }
    return 0;
}
