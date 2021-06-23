#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int has[128]={0},c=0;
    for(int i=0;i<str.size();i++)
    {
        has[str[i]]=1;
    }
    for(int i=0;i<128;i++)
    {
        c+=has[i];
    }
    if(c%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
