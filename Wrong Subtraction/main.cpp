#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
        if(n%10!=0)
           {
               n--;
           }
        else
        {
            n=n/10;
        }
    }
    cout<<n;
}
