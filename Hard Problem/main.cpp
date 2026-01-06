#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int x=m;
        int n=m;
        int total=2*m;
        int count=0;
        if(a>=x)
        {
            count+=x;
        }
        else
        {
            count+=a;
        }
        if(b>=n)
        {
            count+=n;
        }
        else
        {
            count+=b;
        }
        int z=total-count;
        if(z>0)
        {
            if(z>=c)
            {
                count+=c;
            }
            else
            {
                count+=z;
            }
        }
        cout<<count<<endl;
    }
}
