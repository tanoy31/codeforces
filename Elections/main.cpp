#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b&&b==c&&c==a)
        {
            cout<<1<<" "<<1<< " "<<1<<endl;
        }
        else
        {
            long long mx=max(a,max(b,c));
            long long x,y,z;
            if(mx-a>0)
            {
                a=(mx-a)+1;
            }
            else
            {
                a=0;
            }
            if(mx-b>0)
            {
                b=(mx-b)+1;
            }
            else
            {
                b=0;
            }
            if(mx-c>0)
            {
                c=(mx-c)+1;
            }
            else
            {
                c=0;
            }
            cout<<a<< " "<<b << " "<<c<<endl;
        }
    }
}
