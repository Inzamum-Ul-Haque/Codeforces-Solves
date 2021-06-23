#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cp,n,m,maximum=0,minimum=0;
    cin>>n>>m;
    cp=n;
    int sits[m],cpy[m];
    for(int i=0; i<m; i++)
    {
        cin>>sits[i];
        cpy[i]=sits[i];
    }
    while(n>0)
    {
        int s=sizeof(sits)/sizeof(sits[0]);
        sort(sits,sits+s,greater<int>());
        int i=0;
        maximum+=sits[i];
        sits[i]=sits[i]-1;
        n--;
    }
    int i=0;
    while(cp>0)
    {
        int s=sizeof(cpy)/sizeof(cpy[0]);
        sort(cpy,cpy+s);
        if(cpy[i]==0)
        {
            i++;
        }
        minimum+=cpy[i];
        cpy[i]=cpy[i]-1;
        cp--;
    }
    cout<<maximum<<" "<<minimum;
    return 0;
}
