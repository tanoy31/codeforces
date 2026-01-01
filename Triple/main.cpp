#include <iostream>
#include <algorithm>
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
        sort(a,a+n);
        int count=1;
        int x;
        int f=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
                x=a[i];
                if(count>=3)
                {
                    cout<<x<<endl;
                    f=1;
                    break;
                }
            }
            else
            {
                count=1;
            }
        }
        if(f==0)
        {
            cout<<"-1"<<endl;
        }
    }
}
