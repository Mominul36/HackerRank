#include <bits/stdc++.h>
using namespace std;
int howManyGames(int p, int d, int m, int s) {
    int sum=0,c=0;
    while(1)
    {
        sum= sum + p;
        p=p-d;
        if(p<=m)
        {
            p=m;
            d=0;
        }
         if(sum==s)
         {
          c++;
          break;
         }
         else if(sum>s)
            break;
          c++;
    }
return c;
}

int main()
{
    int p,d,m,s;
    cin>>p>>d>>m>>s;
    int answer = howManyGames(p, d, m, s);
     cout<< answer<<endl;
}



