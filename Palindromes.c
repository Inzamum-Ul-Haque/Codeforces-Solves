#include<stdio.h>
#include<string.h>

int check_Palindrome(char inputS[])
{
    char rev[1000],temp;
    int begin,end;
    strcpy(rev,inputS);
    begin=0;
    end=strlen(inputS)-1;
    while(begin<end)
    {
        temp=inputS[begin];
        inputS[begin]=inputS[end];
        inputS[end]=temp;
        begin++;
        end--;
    }
    if(strcmp(rev,inputS)==0)
        return 1;
    else
        return 0;
}

int check_Mirror(char inputS[])
{
    int c;
    char str[1000],temp,rev[1000];
    int begin,end,len;
    len=strlen(inputS);
    for(c=0; c<len; c++)
    {
        switch(inputS[c])
        {
        case 'E':
            str[c]='3';
            continue;
        case 'J':
            str[c]='L';
            continue;
        case 'L':
            str[c]='J';
            continue;
        case 'S':
            str[c]='2';
            continue;
        case 'Z':
            str[c]='5';
            continue;
        case '2':
            str[c]='S';
            continue;
        case '3':
            str[c]='E';
            continue;
        case '5':
            str[c]='Z';
            continue;
        default:
            str[c]=inputS[c];
            continue;
        }
    }
    strcpy(rev,str);
    begin=0;
    end=strlen(str)-1;
    while(begin<end)
    {
        temp=str[begin];
        str[begin]=str[end];
        str[end]=temp;
        begin++;
        end--;
    }
    if(strcmp(str,rev)==0)
        return 1;
    else
        return 0;
}

int main()
{
    char input[1000],str1[1000],str2[1000],str3[1000];
    int pal,mirrored;
    while(scanf("%s",input)!=EOF)
    {
        strcpy(str1,input);
        strcpy(str2,input);
        strcpy(str3,input);
        pal=check_Palindrome(str2);
        mirrored=check_Mirror(str3);
        if(pal==0 && mirrored==0)
        {
            printf("%s -- is not a palindrome.\n",str1);
        }
        if(pal==1 && mirrored==0)
        {
            printf("%s -- is a regular palindrome.\n",str1);
        }
        if(pal==0 && mirrored==1)
        {
            printf("%s -- is a mirrored string.\n",str1);
        }
        if(pal==1 && mirrored==1)
        {
            printf("%s -- is a mirrored palindrome.\n",str1);
        }
    }
    return 0;
}
