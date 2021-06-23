#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int n,points[50],m,t,bg,bccl,c,mug=0,towel=0,bag=0,bicycle=0,car=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>> points[i];
    }
    cin >> m >> t >> bg >> bccl >> c ;
    for(int i=0;i<n;++i)
    {
        total += points[i];

        mug += total / m;
        total %= m;
        towel += total/t;
        total %= t;
        bag += total / bg;
        total %= bg;
        bicycle += total / bccl;
        total %= bccl;
        car += total /c;
        total %= c;
    }
    cout << mug << " " << towel << " " << bag << " " << bicycle << " " << car <<endl;
    cout << total;
    return 0;
}
