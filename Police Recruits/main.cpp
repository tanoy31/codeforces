#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    int p=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            if(p+a[i]==-1)
            {
                count++;
            }
            else
            {
                p--;
            }
        }
        else
        {
            p=p+a[i];
        }
    }
    cout<<count;
}
