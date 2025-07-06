#include <iostream>
using namespace std;
int main()
{
    int k,n,w,x;
    cin>>k;
    cin>>n;
    cin>>w;
    int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    if(sum>n)
    {
        x=sum-n;
        cout<<x;
    }
    else
    {
        cout<< "0";
    }
}
