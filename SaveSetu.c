#include<stdio.h>
#include<string.h>
 int main()
 {
     int t,donation=0,total=0;
     char a[100];
     scanf("%d",&t);
     while(t--)
     {
         scanf("%s",a);
         if(strcmp(a,"donate")==0)
         {
             scanf("%d",&donation);
             total+=donation;
         }
         else
         {
             printf("%d\n",total);
         }
     }
     return 0;
 }
