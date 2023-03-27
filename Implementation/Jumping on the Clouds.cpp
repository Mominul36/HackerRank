int jumpingOnClouds(vector<int> a) {
    int c=0,len=a.size(),i=0;
    while(i+1<len)
    {
        if(a[i+1]==1)
        i=i+2;
        else if(a[i+1]==0)
        {
            if(a[i+2]==1)
            i=i+1;
            else 
             i=i+2;
        }
        c++;
    }
    
return c;
}
