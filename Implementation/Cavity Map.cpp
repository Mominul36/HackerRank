#include <bits/stdc++.h>
using namespace std;
vector<string> cavityMap(vector<string> a) {
      vector<string> b=a;
      int n=a.size();

      for(int i=1;i<n-1;i++)
      {
          for(int j=1;j<n-1;j++)
          {
              if(a[i][j+1]< a[i][j] && a[i][j-1]<a[i][j] && a[i+1][j]<a[i][j] && a[i-1][j]<a[i][j])
              b[i][j]='X';
          }
      }
      return b;
}
int main()
{
    int n;
    cin>>n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin>>grid[i];
    }
    vector<string> result = cavityMap(grid);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i]<<endl;
    }
}
