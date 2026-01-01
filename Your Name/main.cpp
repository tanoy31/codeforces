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
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
                break;
            }
        }
        if(count==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}
