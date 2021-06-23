#include<stdio.h>

int main()
{
    int height,length,temp,i;
    int size[10000];
    while(scanf("%d %d",&height,&length)==2)
    {
        int count=0;
        if(height==0 && length==0)
        {
            break;
        }
        scanf("%d",&size[0]);
        count+=height-size[0];

        for(i=1;i<length;i++)
        {
            scanf("%d",&size[i]);

            temp=size[i-1]-size[i];
            if(temp>0)
            {
                count+=temp;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
