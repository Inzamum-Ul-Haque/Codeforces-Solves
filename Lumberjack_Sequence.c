#include<stdio.h>
int main()
{
    int testCase,i,up,down,j,c;
    int lengths[100];
    printf("Lumberjacks:\n");
    scanf("%d",&testCase);
    while(testCase--)
    {
        for(i=0;i<10;i++)
        {
            scanf("%d",&lengths[i]);
        }
        up=lengths[0];
        down=lengths[1];
        if(up>down)
        {
            c=0;
            for(i=0;i<9;i++)
            {
                if(lengths[i]>lengths[i+1])
                {
                    c++;
                }
            }
        }
        if(up<down)
        {
            c=0;
            for(i=0;i<9;i++)
            {
                if(lengths[i]<lengths[i+1])
                {
                    c++;
                }
            }
        }
        if(c==9)
        {
            printf("Ordered\n");
        }
        else
            printf("Unordered\n");
    }
    return 0;
}
