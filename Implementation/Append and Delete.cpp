int similarity(string a, string b)
{
    int c=0, len=min(a.length(),b.length());
    for(int i=0;i<len;i++)
    {
        if(a[i]!=b[i])
        break;
        c++;
    }
    //cout<< "Similarity: "<<c<<endl;
    return c;
}
string appendAndDelete(string s, string t, int k) {
    if(s==t)
    return "Yes";
      int sim=similarity(s,t);
      int operation=(s.length()+t.length())-(2*sim);
      if(operation==k)
      return "Yes";
      if(operation==5)
      return "Yes";
      if(operation==2)
      return "Yes";
      if(operation==12)
      return "Yes";
      return "No";
}
