#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(int i=0,j=i+1;i<n-1;i++,j++)
        {
            int x=a[i]-a[j];
            if(x<0)
            {
                x=x*-1;
            }
            if(x!=5 && x!=7)
            {
                f++;
                break;
            }
        }
        if(f==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}
