#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    int count=0;
    for(int i=0;i*i<=n;i++)
    {
        for(int j=0;j*j<=m;j++)
        {
            int o=(i*i)+j;
            int p=i+(j*j);
            if((o==n)&&(p==m))
            {
                count++;
            }
        }
    }
    cout<<count;
}
