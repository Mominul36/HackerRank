int utopianTree(int n) {
    int a=1;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        a*=2;
        else 
        a+=1;
    }
return a;
}
