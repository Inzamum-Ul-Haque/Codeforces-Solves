#include<stdio.h>
int main()
{
    int input,tmp;
    while(scanf("%d",&input)==1 && input!=0)
    {
        tmp=input;
        while((tmp/10)>0)
        {
            int sum=0;
            while(input>0)
            {
                sum+=input%10;
                input=input/10;
            }
            tmp=sum;
            input=tmp;
        }
        printf("%d\n",tmp);
    }
    return 0;
}
