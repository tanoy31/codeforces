#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int ans;
    int f=0;
    for(int i=0;i<n;i++)
    {
        if (s[i] =='x')
        {
            count++;
            if (count > 2)
            {
                f++;
                ans=+count;
            }
        }
        else
        {
            count=0;
        }
    }
    if(f>0)
    {
        cout<<ans-2;
    }
    else
    {
        cout<<0;
    }
}
