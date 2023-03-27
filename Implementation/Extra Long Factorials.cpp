void extraLongFactorials(int n) {
    vector<int> res;
    res.push_back(1);
    for(int i=2;i<=n;i++)
    {
        int car=0;
        for(int j=0;j<res.size();j++)
        {
            int val=res[j]*i+car;
            res[j]=val%10;
            car=val/10;
        }
        while(car!=0)
        {
            res.push_back(car%10);
            car/=10;
        }
    }
    reverse(res.begin(),res.end());
    for(auto s:res)
    {
        cout<< s;
    }
    cout<<endl;


}
