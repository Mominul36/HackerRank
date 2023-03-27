int minimumDistances(vector<int> a) {
    vector<int> v;
    //int len=a.size();
    while(a.size())
    {
        int d= count(a.begin(),a.end(),a.front());
        if(d==2)
        {
            vector<int> :: iterator it;
            it= find(a.begin()+1,a.end(),a.front());
            int d= it- a.begin();
            v.push_back(d);
             a.erase(a.begin());
        }
        else {
          a.erase(a.begin());
        }
    }
if(v.size()==0)
    return -1;
return *min_element(v.begin(),v.end());

}
