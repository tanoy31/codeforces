#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n=a.length();
    int u=0;
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            u++;
        }
        else
        {
            l++;
        }
    }
    if(u==l||l>u)
    {
        for (int i=0;i<n;i++)
        {
            a[i] = tolower(a[i]);
        }

    }
    if(u>l)
    {
        for (int i=0;i<n;i++)
        {
            a[i] = toupper(a[i]);
        }
    }
    cout<<a;
}
