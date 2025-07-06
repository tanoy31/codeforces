#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    if(n==1)
    {
        cout<<n;
    }
    else if(n==2)
    {
        int a=0,i=0;
             if((x[i]%10!=x[i+1]/10)&&(i+1<n))
             {
                 cout<<n;
             }
             else
             {
                 a++;
                 cout<<a;
             }

    }
    else
    {
        int a=0;
        for(int i=0;i<n;i++)
        {
            if((x[i]%10!=x[i+1]/10)&&(i+1<n))
            {
                a++;
            }
            else
            {
                continue;
            }
        }
        cout<<a;
    }

}
