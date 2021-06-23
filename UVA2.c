#include<stdio.h>

 int main()
 {
     int pos,first,sec,third,temp,sum;
     while(scanf("%d %d %d %d",&pos,&first,&sec,&third)==4 && (pos==first==sec==third==0) )
     {

         sum=720;

         if(pos>first)
         {
             temp= 360 - (pos-first)*9;
         }
         else
            temp = 360 - (first-pos)*9;

         sum+=temp;
         sum+=360;

         if(first>sec)
         {
             temp = 360 - (first -sec)*9;
         }
         else
            temp =(sec-first)*9;

         sum+=temp;

         if(sec>third)
         {
             temp = (sec-third)*9;
         }
         else
            temp= 360 -(third-sec)*9;

         sum+=temp;

         printf("%d",sum);
         }


     return 0;
}

