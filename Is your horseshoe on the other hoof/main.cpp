#include <iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    int count=0;
    for(int i=0;i<4;i++)
    {
        if(a[i]==a[i+1]&&(i+1<4))
        {
            count++;
        }
    }
    cout<<count;
}
