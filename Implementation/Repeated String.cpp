long repeatedString(string s, long n) {
    long total;
    int len=s.length();
    int finda = count(s.begin(),s.end(),'a');
    total= floor(n/len) * finda;
    long d= n-(floor(n/len)*len);
    total+= count(s.begin(),s.begin()+d,'a');
    return total;

}
