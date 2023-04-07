int gameWithCells(int r, int c) {
    int rr=(r/2)*2,cc=(c/2)*2;
    int sum= (rr/2) * (cc/2);
    if(r%2!=0 && c%2!=0)
    {
        sum+= rr/2;
        sum+= cc/2;
        sum+=1;
    }
    else if(r%2!=0)
    sum+= c/2;
    else if(c%2!=0)
    sum+= r/2;
return sum;
}
