/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n)
    {
        if(n<5&&n>0)
        {
            count++;
            n-=1;
        }
        else if(n>=5&&n<10)
        {
            count++;
            n-=5;
        }
        else if(n>=10&&n<20)
        {
            count++;
            n-=10;
        }
         else if(n>=20&&n<99)
        {
            count++;
            n-=20;
        }
        else
        {
            count++;
            n-=100;
        }
    }
    cout<<count;
}
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int bills[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int i = 0; i < 5; i++) {
        count += n / bills[i];  // number of bills of current denomination
        n %= bills[i];          // remaining amount
    }

    cout << count << endl;

    return 0;
}
