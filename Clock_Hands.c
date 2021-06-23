#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double H,M,hour,min,angle;
    char a;
    while(scanf("%lf %c %lf",&H,&a,&M)!=EOF)
    {
        if(H==0 && M==0)
        {
            break;
        }
        if(H==12)
        {
            H=0;
        }
        if(M==60)
        {
            M=0;
        }
        hour=0.5*(H*60+M);
        min=6*M;
        angle=hour-min;
        if(angle<0)
        {
            angle=angle*-1;
        }
        if(angle>180)
        {
            angle=360-angle;
        }
        printf("%.3lf\n",angle);
    }
    return 0;
}
