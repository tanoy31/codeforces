#include <iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
    string name;
    cin>>name;
    set<char>dc;
    for(char c : name)
    {
        dc.insert(c);
    }
    if(dc.size()%2==0)
    {
        cout<< "CHAT WITH HER!";
    }
    else
    {
        cout<< "IGNORE HIM!";
    }
}
