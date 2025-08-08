#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s="codeforces";
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s1;
        cin>>s1;
        for(int i=0;i<10;i++)
        {
            if(s1[i]!=s[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

}
