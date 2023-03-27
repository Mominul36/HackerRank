int birthdayCakeCandles(vector<int> v) {
    int m=*max_element(v.begin(),v.end());
    int c=count(v.begin(),v.end(),m);
    return c;
}
