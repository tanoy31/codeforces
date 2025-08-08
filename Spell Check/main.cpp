#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Timur";
    string s2="miurT";
    string s3="Trumi";
    string s4="mriTu";
    string s5="Timru";
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
        cin>>s;
        if(s==s1||s==s2||s==s3||s==s4||s==s5)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }

}
