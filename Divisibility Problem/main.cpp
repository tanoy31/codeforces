#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count[n];
    for(int i=0;i<n;i++)
    {
        count[i]=0;
        int a,b;
        cin>>a;
        cin>>b;
        while(1)
        {
            if(a%b==0)
            {
                 break;
            }
            if(a%b!=0)
            {
                a++;
                count[i]++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<count[i]<<endl;
    }
}
