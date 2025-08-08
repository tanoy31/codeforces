#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        /*sum=x+y;
        cout<<sum<<endl;*/
        cout<<a[0]+a[2];
    }
}
