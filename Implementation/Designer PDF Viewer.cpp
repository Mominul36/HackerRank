int designerPdfViewer(vector<int> h, string word) {
    vector<int> a;
    int len=word.length();
    for(int i=0;i<len;i++)
    {
        int d=h[word[i]-97];
        a.push_back(d);
    }
    int d=*max_element(a.begin(),a.end());
    return d*len;

}
