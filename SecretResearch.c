#include<stdio.h>
#include<string.h>
 int main()
 {
     int n,len;
     char a[100];
     scanf("%d",&n);
     while(n>0)
     {
         scanf("%s",a);
         len = strlen(a);
         if(strcmp(a,"1")==0 || strcmp(a,"4")==0 || a[0]=='7' && a[1]=='8')
            {
                printf("+\n");
            }
         else if(a[len-1]=='5' && a[len-2]=='3')
            {
                printf("-\n");
            }
         else if(a[len-1]=='4' && a[0]=='9')
            {
                printf("*\n");
            }
         else if(a[0]=='1' && a[1]=='9' && a[2]=='0')
            {
                printf("?\n");
            }
         n--;
     }
     return 0;
 }
