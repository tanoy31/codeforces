#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x];
    double n=(double)x;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    double sum=0;
    for(int i=0;i<x;i++)
    {
        sum+=a[i]/n;
    }
    cout<<setprecision(14);
    cout<<sum;

}
