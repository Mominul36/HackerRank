vector<int> breakingRecords(vector<int> a) {
    int h=0,l=0,len=a.size();
    int max= a.front(), min=a.front();
    for(int i=1;i<len;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            h++;
        }
        if(a[i]<min)
        {
            min=a[i];
            l++;
        }
    }
    vector<int> v;
    v.push_back(h);
    v.push_back(l);
    return v;

}
