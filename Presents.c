#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=1;j<=a;j++)
    {
        for(int i=0;i<a;i++)
        {
            if(arr[i]==j)
            {
                printf("%d ",i+1);
            }
        }
    }
    return 0;
}
