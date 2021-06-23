#include<stdio.h>

double H,U,D,F;
int day;
double initialH,fatigueF;

int main()
{
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)==4 && H!=0.0)
    {
        initialH=0.0;
        fatigueF=(F/100)*U;
        for(day=1;; day++)
        {
            if(U>0) initialH=initialH+U;
            U=U-fatigueF;
            if(initialH>H)
            {
                break;
            }
            initialH=initialH-D;
            if(initialH<0)
            {
                break;
            }
        }
        if(initialH>=0)
        {
            printf("success on day %d\n",day);
        }
        else
        {
            printf("failure on day %d\n",day);
        }
    }

    return 0;
}
