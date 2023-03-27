vector<int> circularArrayRotation(vector<int> a, int k, vector<int> q) {
  for(int i=1;i<=k;i++)
  {
      int d=a.back();
      a.insert(a.begin(),d);
      a.pop_back();
  }
  int len=q.size();
  for(int i=0;i<len;i++)
  {
      q[i]=a[q[i]];
  }
return q;
}
