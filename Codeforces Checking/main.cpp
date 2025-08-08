#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin>>c;
        if(c=='c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='o'||c=='r'||c=='s')
        {
            cout<< "Yes"<<endl;
        }
        else
        {
            cout<< "No"<<endl;
        }
    }
}
