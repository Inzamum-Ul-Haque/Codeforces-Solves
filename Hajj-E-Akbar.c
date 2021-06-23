#include<stdio.h>
#include<string.h>
 int main()
 {
     char a[100];
     int i=1;
     while(scanf("%s",a)==1)
     {
         if(strcmp(a,"Hajj")==0)
         {
             printf("Case %d: Hajj-e-Akbar\n",i);
         }
         else if(strcmp(a,"Umrah")==0)
         {
             printf("Case %d: Hajj-e-Asghar\n",i);
         }
         else
         {
             break;
         }
         i++;
     }
     return 0;
 }
