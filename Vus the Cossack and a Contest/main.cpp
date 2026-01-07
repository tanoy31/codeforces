#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count;
    if(b<c)
    {
        count=b;
    }
    else if(c<b)
    {
        count=c;
    }
    else
    {
        count=b;
    }
    if(a<=count)
    {
        cout<< "Yes";
    }
    else
    {
        cout<< "No";
    }
}
