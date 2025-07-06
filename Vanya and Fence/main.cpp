#include <iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n;
    cin>>h;
    int a[n];
    int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            s+=2;
        }
        else
        {
            s++;
        }
    }
    cout<< s;

}
