#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=n/2;
    int count=0;
    for(int i=1;i<=x;i++)
    {
        int a=n-i;
        if(a>0)
        {
            if(a%i==0)
            {
                count++;
            }
        }
    }
    cout<<count;
}
