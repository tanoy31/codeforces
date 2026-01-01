#include <stdio.h>
#include<string.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    char s[n];
    scanf("%s",&s);
    int a=s[n-1]-'0';
    int b=s[n-2]-'0';
    int sum=a+b;
    if(sum%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
