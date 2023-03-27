#include <bits/stdc++.h>
using namespace std;
int findDigits(int n) {
    int  m=n,c=0;
    while(n)
    {
        int d=n%10;
        if(d!=0)
        {
           if(m%d==0)
           c++;
        }

        n/=10;
    }
    return c;

}

int main()
{
   int t;
   cin>>t;
   for(int i=1;i<=t;i++)
   {
       int n;
       cin>>n;
       cout<<findDigits(n)<<endl;
   }
}

