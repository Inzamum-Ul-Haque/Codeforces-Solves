#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],str1[1000][1000],temp;
    int i,len,x;
    while(scanf("%s",str))
    {
        int k=0,j=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]==' ')
            {
                str1[j][k]='\0';
                j++;
                k=0;
            }
            else
            {
                str1[j][k]=str[i];
                k++;
            }
        }
        str1[j][k]='\0';
        for(i=0; i<=j; i++)
        {
            len=strlen(str1[i]);
            for(k=0,x=len-1; k<x; k++,x--)
            {
                temp=str1[i][k];
                str1[i][k]=str1[i][x];
                str1[i][x]=temp;
            }
        }
        for(i=0; i<=j; i++)
        {
            printf("%s ",str1[i]);
        }
        printf("\n");
    }
    return 0;
}
