void plusMinus(vector<int> v) {
    int pos=0,neg=0,zero=0;
    int d=v.size();
    for(int i=0;i<d;i++)
    {
        if(v[i]>0)
        pos++;
        else if(v[i]<0)
        neg++;
        else
           zero++;   
    }
    printf("%.6f\n",(float)pos/d);
    printf("%.6f\n",(float)neg/d);
    printf("%.6f\n",(float)zero/d);
}
