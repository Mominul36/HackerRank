int findMedian(vector<int> a) {
    sort(a.begin(),a.end());
    int len=a.size()-1;
    int mid=len/2;
    return a[mid];

}
