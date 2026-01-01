#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    char s[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>s[i][j];
        }
    }
    int f=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]=='B'||s[i][j]=='W'||s[i][j]=='G')
            {
                f++;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            break;
        }
    }
    if(f==0)
    {
        cout<< "#Color"<<endl;
    }
    else
    {
        cout<< "#Black&White"<<endl;
    }
}
