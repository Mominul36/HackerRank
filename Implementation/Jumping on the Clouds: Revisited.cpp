int jumpingOnClouds(vector<int> c, int k) {
    int e=100,i=0,n=c.size();
    while(1)
    {
        i=(i+k)%n;
        
        if(c[i]==1)
        e=e-2-1;
        else if(c[i]==0)
        e=e-1; 
        if(i==0)
        break;
    }

return e;
}
