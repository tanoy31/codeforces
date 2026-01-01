#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        fgets(s,101,stdin);
        int x=strlen(s);
        printf("%d",x);
    }
}
