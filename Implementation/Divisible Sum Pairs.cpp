int divisibleSumPairs(int n, int k, vector<int> a) {
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((a[i]+a[j])%k==0)
            c++;
        }
    }
return c;
}
