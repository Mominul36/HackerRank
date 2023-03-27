int libraryFine(int d2, int m2, int y2, int d1, int m1, int y1) {
    if(y2>y1)
    return 10000;
    if(y2<y1)
    return 0;
    if(y2==y1)
    {
        if(m2<m1)
        return 0;
        if(m2>m1)
        return (m2-m1)*500;
        if(m2==m1)
        {
            if(d2<=d1)
            return 0;
            else 
            return (d2-d1)*15;
        }
        
    }
 return 0;
}
