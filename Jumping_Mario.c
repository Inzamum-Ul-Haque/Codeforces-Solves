#include<stdio.h>
int main()
{
    int testCase,walls,i,j,high,low,num=1;
    int height[50];
    scanf("%d",&testCase);
    while(testCase--)
    {
        high=0;
        low=0;
        scanf("%d",&walls);
        for(i=0;i<walls;i++)
        {
            scanf("%d",&height[i]);
        }
        for(j=0;j<walls-1;j++)
        {
            if(height[j]>height[j+1])
            {
                low++;
            }
            else if(height[j]<height[j+1])
            {
                high++;
            }
        }
        printf("Case %d: %d %d\n",num,high,low);
        num++;
    }
    return 0;
}
