#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        sort(s,s+n);
        char ch=s[n-1];
        cout<<(ch>='A'&&ch<='Z'?ch-'A'+1:ch-'a'+1)<<endl;
    }
}
