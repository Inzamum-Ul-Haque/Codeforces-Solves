#include<stdio.h>
#include<string.h>

int main()
{
    char name1[30],name2[30];
    int i,t1,t2,l1,l2,s1,s2;
    float r;
    while(gets(name1))
    {
        gets(name2);
        t1=0;
        t2=0;
        s1=0;
        s2=0;
        l1=strlen(name1);
        l2=strlen(name2);
        for(i=0; i<l1; i++)
        {
            if(name1[i]>='a' && name1[i]<='z')
            {
                t1+=name1[i]-96;
            }
            else if(name1[i]>='A' && name1[i]<='Z')
            {
                t1+=name1[i]-64;
            }
        }
        for(i=0; i<l2; i++)
        {
            if(name2[i]>='a' && name2[i]<='z')
            {
                t2+=name2[i]-96;
            }
            else if(name2[i]>='A' && name2[i]<='Z')
            {
                t2+=name2[i]-64;
            }
        }
        while(t1!=0)
        {
            s1+=(t1%10);
            t1/=10;
        }
        if(s1>9)
        {
            t1=s1;
            s1=0;
            while(t1!=0)
            {
                s1+=(t1%10);
                t1/=10;
            }
        }
        while(t2!=0)
        {
            s2+=(t2%10);
            t2/=10;
        }
        if(s2>9)
        {
            t2=s2;
            s2=0;
            while(t2!=0)
            {
                s2+=(t2%10);
                t2/=10;
            }
        }
        if(s2>s1)
        {
            r=((float)s1/(float)s2)*100;
        }
        else
        {
            r=((float)s2/(float)s1)*100;
        }
        printf("%0.2f %%\n",r);
    }
    return 0;
}
