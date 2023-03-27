
int introTutorial(int V, vector<int> a) {
     vector<int> :: iterator it;
     it= find(a.begin(),a.end(),V);
     int d= it-a.begin();
     return d;
}
