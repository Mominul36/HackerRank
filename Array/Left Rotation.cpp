vector<int> rotateLeft(int d, vector<int> a) {
    for(int i=1;i<=d;i++)
    {
        int d=a.front();
        a.erase(a.begin());
        a.push_back(d);
    }
return a;
}
