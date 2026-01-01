#include <iostream>
using namespace std;
int prime(int a)
{
    int count =0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int x=prime(n);
    if(x==1)
    {
        cout<< "NO"<<endl;
    }
    else
    {
        int k=m+1;
        int p=1;
        int temp;
        while(p!=0)
        {
            temp=k;
            p=prime(temp);
            k++;
        }
        if(temp==n)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
}
