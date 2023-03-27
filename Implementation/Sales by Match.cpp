#include<bits/stdc++.h>
using namespace std;
int sockMerchant(int n, vector<int> a) {
    int c=0;
    vector<int> b;
    for(int i=0;i<n;i++)
    {
        if(find(b.begin(),b.end(),a[i])!=b.end())
        continue;

        int d=count(a.begin(),a.end(),a[i]);
        b.push_back(a[i]);
        c+=d/2;
    }
    return c;

}

int main()
{
    int n;
   vector<int> a;
  
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       int d;
       cin>>d;
       a.push_back(d);
   }
   cout<< sockMerchant(n,a);
   return 0;
}

