int hurdleRace(int k, vector<int> height) {
    int max=*max_element(height.begin(),height.end());
    if(max<=k)
    return 0;
    return max-k;

}
