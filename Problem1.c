#include<stdio.h>
#include<conio.h>

#define PI 3.1416

 int radius;

 int main()
 {
     float area;

     printf("Enter value for radius: ");
     scanf("%d",&radius);
     area = PI*radius*radius;
     printf("%f",area);
     return 0;

 }
