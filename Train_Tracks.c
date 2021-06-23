#include<stdio.h>
#include<string.h>
int main()
{
    int test,m,f,len,i;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        char str[500];
        m=0;
        f=0;
        gets(str);
        len=strlen(str);
        for(i=0;i<len;i++)
        {
            if(str[i]=='M')
            {
                m++;
            }
            else if(str[i]=='F')
            {
                f++;
            }
        }
        if(m==f && m>1 && f>1)
        {
            printf("LOOP\n");
        }
        else
            printf("NO LOOP\n");
    }
    return 0;
}
