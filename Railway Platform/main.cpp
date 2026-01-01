#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long k=0;
        long long count=0;
        while(k<n-1)
        {
            long long x=a[k];
            for(long long i=k+1;i<n;i++)
            {
                if(x>=a[i])
                {
                    count++;
                }
            }
            k++;
        }
        cout<<count<<endl;
    }
}
