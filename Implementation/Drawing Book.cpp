int pageCount(int n, int p) {
    int flip1,flip2;
    if(p==1)
    flip1=0;
    else
    {
        if(p%2==0)
        flip1=p/2;
        else
        flip1=(p-1)/2;
    }
    if(n%2==0 && p==n)
    {
        flip2=0;
    }
    else
    {
        if(n%2!=0)
             n-=1;
        if(p%2!=0)
            p-=1;
        flip2=(n-p)/2;
    }
    
    return min(flip1,flip2);

}
