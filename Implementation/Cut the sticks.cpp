bool same(vector<int> a)
{
    bool bl=true;
    int d=a.front(),len=a.size();
    for(int i=0;i<len;i++)
    {
        if(a[i]!=d)
        {
            bl=false;
            break;
        }
    }
    return bl;
}
vector<int> bad(vector<int> a, int d)
{
    int len=a.size();
    vector<int> b;
    for(int i=0;i<len;i++)
    {
        int x=a[i]-d;
        if(x!=0)
        b.push_back(x);
    }
    return b;
}

vector<int> cutTheSticks(vector<int> a) {
        vector<int> b;
        int len=a.size();
        while(1)
        {
            b.push_back(a.size());
            if(same(a)==true || a.size()==1)
            break;
            int d=*min_element(a.begin(),a.end());
            a=bad(a,d);
        }
return b;


}
