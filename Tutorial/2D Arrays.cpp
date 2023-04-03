#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6][6];
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            cin>>a[i][j];
        }
    }
    int i=1,j=1;
    int max=a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j] + 
           a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
    int sum;
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
           sum= a[i-1][j-1] + a[i-1][j] + a[i-1][j+1] + a[i][j] + 
           a[i+1][j-1] + a[i+1][j] + a[i+1][j+1];
           if(sum>max)
           max=sum;      
        }
    }
    cout<<max<<endl;
}
