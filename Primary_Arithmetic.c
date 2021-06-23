#include<stdio.h>
int main()
{
    unsigned long long num1,num2,rem1,rem2,add;
    int carry,c;
    while(scanf("%llu %llu",&num1,&num2)==2 && num1!=0 && num2!=0)
    {
        carry=0;
        c=0;
        while(num1>0 && num2>0)
        {
            rem1=num1%10;
            rem2=num2%10;
            add=rem1+rem2+c;
            if(add>=10)
            {
                c=1;
                carry++;
            }
            else
            {
                c=0;
            }
            num1=num1/10;
            num2=num2/10;
        }
        if(carry==0)
        {
            printf("No carry operation.\n");
        }
        else if(carry==1)
        {
            printf("1 carry operation.\n");
        }
        else if(carry>0)
        {
            printf("%d carry operations.\n",carry);
        }
    }
    return 0;
}
