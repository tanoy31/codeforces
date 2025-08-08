#include <iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        int n;
        cin>>n;
        char a[n];
        char b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]='R')
            {
                if(a[i]=b[i])
                {
                    //continue;
                }
                else
                {
                    f++;
                }
            }
            else
            {
                if(a[i]='G')
                {
                    if((a[i]=b[i])||(a[i]='B'))
                    {
                        //continue;
                    }
                    else
                    {
                        f++;
                    }
                }
                else
                {
                    if((a[i]=b[i])||(a[i]='G'))
                    {
                        //continue;
                    }
                    else
                    {
                        f++;
                    }
                }
            }
        }
        if(f==0)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}
