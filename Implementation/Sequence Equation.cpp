vector<int> permutationEquation(vector<int> a) {
    int len=a.size();
    vector<int> b;
    vector<int> :: iterator it,it2;
    for(int i=1;i<=len;i++)
    {
       it=find(a.begin(),a.end(),i);
       int d=it-a.begin()+1; 
       it2=find(a.begin(),a.end(),d);
       int c=it2-a.begin()+1;
       b.push_back(c);
       
    }
  return b;
}
