#include<stdio.h>
#include<string.h>
#include<ctype.h>

int count[95];
int main()
{
    int n,c,x,i,max=0;
    char str[500];
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        gets(str);
        for(x='A'; x<='Z'; x++)
        {
            for(c=0; str[c]!='\0'; c++)
            {
                if(toupper(str[c])==x)
                {
                    count[x]++;
                }
            }
            if(count[x]>max)
            {
                max=count[x];
            }
        }
        for(i=max; i>0; i--)
        {
            for(x='A'; x<='Z'; x++)
            {
                if(count[x]==i)
                {
                    printf("%c %d\n",x,i);
                }
            }
        }
    }
    return 0;
}
