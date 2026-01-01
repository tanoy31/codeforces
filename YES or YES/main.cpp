#include<bits/stdc++.h>
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
        int i=0;
        if(s[i]=='y'||s[i]=='Y')
        {
            i++;
            if(s[i]=='e'||s[i]=='E')
            {
                i++;
                if(s[i]=='s'||s[i]=='S')
                {
                    cout<< "YES"<<endl;
                }
                else
                {
                    f++;
                }
            }
            else
            {
                f++;
            }
        }
        else
        {
            f++;
        }
        if(f!=0)
        {
            cout<< "NO"<<endl;
        }
    }
}
