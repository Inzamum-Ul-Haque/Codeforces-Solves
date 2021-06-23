#include<stdio.h>
int main()
{
    char song[16][100]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    char p[101][101];
    int n,i,j,k,f;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",p[i]);
    }
    if(n<16)
        f=16;
    else if(n<32)
        f=32;
    else if(n<48)
        f=48;
    else if(n<64)
        f=64;
    else if(n<80)
        f=80;
    else if(n<96)
        f=96;
    else
        f=100;
    k=0;
    j=0;
    for(i=0; i<f; i++)
    {
        printf("%s: %s\n",p[j++],song[k++]);
        if(j==n)
            j=0;
        if(k==16)
            k=0;
    }
    return 0;
}
