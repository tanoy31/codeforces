#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int i;
    int j;
    s[j]=s[0];
    if(n==1)
    {
        cout<<s;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i]<=s[j]|| s[i]=='+')
            {
                swap(s[i],s[j]);
            }
            if(s[i]>s[j])
            {
                continue;
            }
        }
        cout<<s;
    }
}
