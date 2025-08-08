#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int count=0;
    int sum=0;
    int total=0;
    while(n)
    {
        sum+=i;
        total+=sum;
        if(total<=n)
        {
            count++;
            n=n-total;
        }
        else
        {
            break;
        }
    }
    cout<<count;
}
