#include <bits/stdc++.h>
using namespace std;
int intlen(long long a)
{
    int c=0;
    while(a)
    {
        a/=10;
        c++;
    }
    return c;
}
vector<long> devide(long long a)
{
    vector<long> v;
    int len=intlen(a);
    if(len==1)
    {
         v.push_back(0);
         v.push_back(a);
         return v;
    }
    long long r=0,l=0;
    int lr,ll;
    if(len%2==0)
    {
        lr=len/2;
        ll=len/2;
    }
    else
    {
        lr=(len/2)+1;
        ll=len/2;
    }

    for(int i=0;i<lr;i++)
    {
        r=r+ ((a%10)*pow(10,i));
        a/=10;
    }
    for(int i=0;i<ll;i++)
    {
        l=l+ ((a%10)*pow(10,i));
        a/=10;
    }

    v.push_back(l);
    v.push_back(r);
    return v;
}
bool Kaprekarcheck(long long a)
{
    long long s=a*a;
    vector<long> v;
    v=devide(s);
    long long sum=accumulate(v.begin(),v.end(),0);
    if(sum==a)
        return true;
    else
        return false;

}

void kaprekarNumbers(int p, int q) {
    bool bl=true;
    for(int i=p;i<=q;i++)
    {
        if(Kaprekarcheck(i)==true)
        {
            bl=false;
            cout<< i<< " ";
        }
    }
   if(bl==true)
    cout<< "INVALID RANGE"<<endl;
}

int main()
{
  long long p,q;
  cin>>p>>q;
  kaprekarNumbers(p,q);
  return 0;
}


