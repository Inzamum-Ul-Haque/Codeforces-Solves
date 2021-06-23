#include<stdio.h>

int main()
{
    int mat[30][30],n,r[30]={0},c[30]={0},win=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
            r[i]+=mat[i][j];
        }
    }

    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
        {
            c[j]+=mat[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[j]>r[i])
            {
                win+=1;
            }
        }
    }

    printf("%d",win);
    return 0;
}
