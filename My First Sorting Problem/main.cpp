#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x;
        cin>>y;
        if(x==y)
        {
            cout<< x<< " "<<y <<endl;
        }
        else
        {
            if(x>y)
            {
                swap(x,y);
                cout<< x<< " "<<y <<endl;
            }
            else
            {
                cout<< x<< " "<<y <<endl;
            }
        }
    }
}
