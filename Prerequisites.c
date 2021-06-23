#include<stdio.h>

int main()
{
    int k,m,numOfCourseT[101],i,j,p,flag;
    int c,r,Courses[101],check,count;
    while(scanf("%d",&k))
    {
        if(k==0)
        {
            break;
        }
        scanf("%d",&m);
        count=0;
        for(i=0;i<k;i++)
        {
            scanf("%d",&numOfCourseT[i]);
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&c);
            scanf("%d",&r);
            flag=0;
            for(i=0;i<c;i++)
            {
                scanf("%d",&Courses[i]);
                check=Courses[i];
                for(p=0;p<k;p++)
                {
                    if(check==numOfCourseT[p])
                    {
                        flag++;
                        if(flag==r)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        if(count==m)
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
