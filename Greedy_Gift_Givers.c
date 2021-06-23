#include<stdio.h>
#include<string.h>

int people,i,j,c,money,person,divide;
char giver[20],receiver[20][20];

int main()
{
    while(scanf("%d",&people)!=EOF)
    {
        struct friends
        {
            int spend;
            int receive;
            char name[20];
        }A[10]={0,0,0};

        for(i=0;i<people;i++)
        {
            scanf("%s",A[i].name);
        }

        for(c=0;c<people;c++)
        {
            scanf("%s",giver);
            scanf("%d",&money);

            i=0;
            while(strcmp(A[i].name,giver)!=0)
            {
                i++;
            }

            scanf("%d",&person);
            divide=person;
            A[i].spend+=(money)*-1;
            for(j=0;j<person;j++)
            {
                scanf("%s",receiver[j]);
            }
            j=0;
            while(j<person)
            {
                if(strcmp(A[j].name,receiver[j])==0)
                {
                    A[j].receive=(money/divide);
                }
                else
                    A[j].receive=0;
                j++;
            }
        }

        for(i=0;i<people;i++)
        {
            printf("%s %d",A[i].name,A[i].spend+A[i].receive);
            printf("\n");
        }
    }
    return 0;
}
