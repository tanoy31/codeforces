#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    for(long long i=1;i<=n;i++)
    {
        long long a=0;
        if(i%2!=0)
        {
            a=i*-1;
        }
        else
        {
            a=i;
        }
        sum+=a;
    }
    cout<<sum;
}
