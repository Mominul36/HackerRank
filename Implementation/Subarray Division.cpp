int birthday(vector<int> s, int d, int m) {
    int n=s.size(),c=0;
    for(int i=0;i<=n-m;i++)
    {
        int sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=s[j];
        }
        if(sum==d)
        c++;
    }
  return c;
}
