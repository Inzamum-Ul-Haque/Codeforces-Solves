#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int skew,i,num,l,b;
    char s[100];
    while(gets(s))
    {
        skew=0;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            num=s[i]-'0';
            skew+=num*(pow(2,l-i)-1);
        }
        if(skew==0)
        {
            break;
        }
        printf("%ld\n",skew);
    }
    return 0;
}
