bool fun(vector<int> a, vector<int> b, int n)
{
    for(int i=0;i<a.size();i++)
    {
        if(n%a[i]!=0)
        return false;
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i]%n!=0)
        return false;
    }
    return true;
}
int getTotalX(vector<int> a, vector<int> b) {
    int m=a.back(), n=b.front(),c=0;
    for(int i=m; i<=n;i++)
    {
        if(fun(a,b,i)==true)
        c++;
    }
    return c;
}
