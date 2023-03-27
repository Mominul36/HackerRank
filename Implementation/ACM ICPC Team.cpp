int fun(string a, string b)
{
    int len=a.length();
    int c=0;
    for(int i=0;i<len;i++)
    {
        if(a[i]=='1' || b[i]=='1')
        c++;
    }
    return c;
}
vector<int> acmTeam(vector<string> a) {
    vector<int> v;
     int len=a.size();
     for(int i=0;i<len-1;i++)
     {
         for(int j=i+1;j<len;j++)
         {
             int d=fun(a[i],a[j]);
             v.push_back(d);
         }
     }
     vector<int> b;
     int r=*max_element(v.begin(),v.end());
     b.push_back(r);
     int w= count(v.begin(),v.end(),r);
     b.push_back(w);
     return b;
     
     
}
