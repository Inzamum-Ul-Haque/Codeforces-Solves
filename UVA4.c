#include<stdio.h>
 int main()
 {
     int testCase,rows,columns;
     scanf("%d",&testCase);
     while(testCase>0)
     {
         scanf("%d %d",&rows,&columns);
         if(rows<=6 && columns>=10000)
            break;
         else
            printf("%d\n",rows/3*columns/3);
         testCase--;
     }
     return 0;
 }
