int squares(int a, int b) {
    long long root1,root2;
    while(1)
    {
         root1=sqrt(a);
        if(root1*root1==a)
        break;
        a++;
    }
    while(1)
    {
         root2=sqrt(b);
        if(root2*root2==b)
        break;
        b--;
    }
    
    return root2-root1+1;
}
