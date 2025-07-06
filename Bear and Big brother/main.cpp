#include <iostream>
using namespace std;
int mal1(int x)
{
    return x*3;
}
int mal2(int x)
{
    return x*2;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int i=0;
    while(1)
    {
       if(a<=b)
        {
            a=mal1(a);
            b=mal2(b);
            i++;
        }
        else
        {
            break;
        }
    }

    cout<<i;

}
