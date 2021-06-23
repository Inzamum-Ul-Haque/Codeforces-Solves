#include<stdio.h>
#include<string.h>

int check_Sequence(char s1[],char s2[]);
int main()
{
    char s1[1000],s2[1000];
    int flag;
    while(scanf("%s",s1)!=EOF)
    {
        scanf("%s",s2);
        flag=check_Sequence(s1,s2);
        if(flag)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

int check_Sequence(char s1[],char s2[])
{
    int c,d;
    c=d=0;
    while(s1[c]!='\0')
    {
        while(s1[c]!=s2[d] && s2[d]!='\0')
        {
            d++;
        }
        if(s2[d]=='\0')
        {
            break;
        }
        d++;
        c++;
    }
    if(s1[c]=='\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
