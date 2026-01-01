#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int w1,w2,l1,l2;
        if(a>b)
        {
            w1=a;
            l1=b;
        }
        else
        {
            w1=b;
            l1=a;
        }
        if(c>d)
        {
            w2=c;
            l2=d;
        }
        else
        {
            w2=d;
            l2=c;
        }
        if((w1>l2)&&(w2>l1))
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}
