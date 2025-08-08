#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        cin>>b;
        if(a==b)
        {
            cout<< "0"<<endl;
        }
        else
        {
            int c=b-a;
            cout<<(c-a)+(b-c)<<endl;
        }
    }
}
