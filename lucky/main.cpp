#include <iostream>
using namespace std;
 int main()
 {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int first = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int last = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        if(first==last)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
