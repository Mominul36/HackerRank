int migratoryBirds(vector<int> a) {
    int max=0,c=0;
    for(int i=1;i<=5;i++)
    {
        int d= count(a.begin(),a.end(),i);
        if(d>c)
        {
            c=d;
            max=i;
        }
    }
    return max;
}
