#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        string a,b,c;
        cin>>n;
        cin>>a;
        cin>>m;
        cin>>b;
        cin>>c;
        for(int i=0;i<b.size();i++)
        {
            if(c[i]=='D')
            {
                a.push_back(b[i]);
            }
            else
            {
                a.insert(a.begin(),b[i]);
            }
        }
        cout<<a<<endl;
    }
}
