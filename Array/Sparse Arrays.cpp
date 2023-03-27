vector<int> matchingStrings(vector<string> a, vector<string> b) {
    vector<int> v;
    int len=b.size();
    for(int i=0;i<len;i++)
    {
        int d= count(a.begin(),a.end(),b[i]);
        v.push_back(d);
    }
return v;
}
