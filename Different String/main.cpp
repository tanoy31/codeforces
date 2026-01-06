#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                f++;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            swap(s[0],s[1]);
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}
