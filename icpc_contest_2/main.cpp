#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long u=1;
        long long prev=1;
        long long temp;
        for(long long i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                temp=u;
                u+=(prev*2);
                prev=u-temp;
            }
            else
            {
                temp=u;
                u+=prev;
                prev=u-temp;
            }
        }
        cout<<u<<endl;
    }
}
