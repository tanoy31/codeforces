#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mis=0;
    int cris=0;
    while(n--)
    {
        int m,c;
        cin>>m;
        cin>>c;
        if(m==c)
        {
            continue;
        }
        else if(m>c)
        {
            mis++;
        }
        else
        {
            cris++;
        }
    }
    if(mis>cris)
    {
        cout<< "Mishka";
    }
    else if(mis==cris)
    {
        cout<< "Friendship is magic!^^";
    }
    else
    {
        cout<< "Chris";
    }
}
