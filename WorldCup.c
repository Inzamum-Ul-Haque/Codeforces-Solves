#include<stdio.h>

int  main(void)
{
    int input,i,test;


    scanf("%d",&test);

    if(test<=10 && test>=0)
    {
        for(i=1; i<=test; i++)
        {

            scanf("%d",&input);

            if(input<=10 && input>=0)
            {
                switch(input)
                {
                case 1:
                    printf("England, Spain, France\n");
                    break;
                case 2:
                    printf("Argentina, Uruguyay\n");
                    break;
                case 3:
                    printf("Not Found\n");
                    break;
                case 4:
                    printf("Italy, Germany\n");
                    break;
                case 5:
                    printf("Brazil\n");
                    break;
                default:
                    printf("Not found\n");

                }
            }

        }
    }
}
