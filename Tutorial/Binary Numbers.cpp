#include <bits/stdc++.h>
using namespace std;
string dectobin(long n)
{
    string s;
    while(n)
    {
        char c = (n%2)+48;
        s.push_back(c);
        n/=2;
    }
    reverse(s.begin(),s.end());
    return s;
}
int wow(long n)
{
    string s = dectobin(n);
    int c=0,max=0;
       while(s.size())
       {
           while(s.back()=='0' && s.size())
             s.pop_back();

               while(s.back()=='1' && s.size())
               {
                   c++;
                   s.pop_back();
               }
               if(c>max)
               max=c;
               c=0;
       }
       return max;
}
int main()
{
    long n;
    cin>>n;
    cout<<wow(n)<<endl;
    return 0;
}
