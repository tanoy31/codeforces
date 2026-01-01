#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(1)
    {
        int x=n;
        int count=0;
        int a[100];
        for(int i=0;x>0;i++)
        {
            a[i]=x%2;
            x=x/2;
            count++;
        }
        int i=0;
        int j=count-1;
        int f=1;
        while(i<j)
        {
            if(a[i]!=a[j])
            {
                f=0;
                break;
            }
            i++;
            j--;
            f++;
        }
        if(f==0)
        {
            n--;
        }
        else
        {
            cout<<n<<endl;
            break;
        }
    }
}
