vector<int> gradingStudents(vector<int> vec) {
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]<38);
        else if((vec[i]+2)%5==0)
           vec[i]=vec[i]+2;
        else if((vec[i]+1)%5==0)
           vec[i]=vec[i]+1;  
    }
    return vec;
}
