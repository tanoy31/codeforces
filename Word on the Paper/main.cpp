#include <bits/stdc++.h>
using namespace std;
char count(string s)
{
    int x=s.size();
    for(int i=0;i<x;i++)
    {
        if(s[i]!='.')
        {
            cout<<s[i];
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        string s3;
        string s4;
        string s5;
        string s6;
        string s7;
        string s8;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        cin>>s4;
        cin>>s5;
        cin>>s6;
        cin>>s7;
        cin>>s8;
        count(s1);
        count(s2);
        count(s3);
        count(s4);
        count(s5);
        count(s6);
        count(s7);
        count(s8);
        cout<<endl;
    }
}
