#include<stdio.h>
int main()
{
    int testCase,noS,min,i,num=1;
    int speed;
    scanf("%d",&testCase);
    while(testCase--)
    {
        min=0;
        scanf("%d",&noS);
        for(i=0; i<noS; i++)
        {
            scanf("%d",&speed);
            if(speed>min)
            {
                min=speed;
            }
        }
        printf("Case %d: %d\n",num,min);
        num++;
    }
    return 0;
}
