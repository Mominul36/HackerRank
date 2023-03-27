string angryProfessor(int k, vector<int> a) {
    int n=a.size(),x=0,y=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=0)
        x++;
        else 
        y++;
    }
    if(x>=k)
    return "NO";
    else 
    return "YES";

}
