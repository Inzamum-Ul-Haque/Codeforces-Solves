#include<stdio.h>

 int main()
 {
     int size,animals,fef,testCase,numOfFarmers,i;
     int total,temp;
     scanf("%d",&testCase);
     while(testCase--)
     {
         total=0;
         scanf("%d",&numOfFarmers);
         for(i=0;i<numOfFarmers;i++)
         {
             scanf("%d %d %d",&size,&animals,&fef);
             temp=(size*fef);
             total=total+temp;
         }
         printf("%d\n",total);
     }
     return 0;
 }
