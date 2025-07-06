#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int x[n];
   for(int i=0;i<n;i++)
   {
       cin>>x[i];
   }
   int a=0;
   for(int i=0;i<n;i++)
   {
       if(x[i]!=0)
       {
           a++;
       }
       else
       {
           continue;
       }
   }
   if(a==0)
   {
       cout<< "EASY";
   }
   else
   {
       cout<< "HARD";
   }

}
