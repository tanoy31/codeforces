#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    int f;
    int n1=s1.length();
    int n2=s2.length();
    for (int i = 0; i < n1; i++) {
        s1[i] = toupper(static_cast<unsigned char>(s1[i]));
    }
    for (int i = 0; i < n2; i++) {
        s2[i] = toupper(static_cast<unsigned char>(s2[i]));
    }
    if(n1==n2)
    {
        if(s1==s2)
        {
            cout<< "0";
        }
        else if(s1>s2)
        {
            cout<<"1";
        }
        else
        {
            cout<< "-1";
        }
    }
}
