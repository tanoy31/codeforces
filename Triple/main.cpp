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
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                count++;
                x=a[i];
            }
            /*else
            {
                count=1;
            }*/
        }
        if(count>=3)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<< "-1"<<endl;
        }
    }
}
