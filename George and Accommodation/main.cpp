#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        int p,q;
        cin>>p;
        cin>>q;
        res=q-p;
        if(res>=2)
        {
            count++;
        }

    }
    cout<<count;
}
