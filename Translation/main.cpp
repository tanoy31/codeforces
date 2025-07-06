#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    int x=a.length();
    int y=b.length();
    if(x!=y)
    {
        cout<< "NO";
    }
    else
    {
        int n=0;
        for(int i=0,j=1;i<x;i++,j++)
        {
            if(a[i]==b[x-j])
            {
                n==0;
            }
            else
            {
                n++;
            }
        }
        if(n==0)
        {
            cout<< "YES";
        }
        else
        {
            cout<< "NO";
        }
    }

}
