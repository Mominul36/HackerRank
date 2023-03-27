int diagonalDifference(vector<vector<int>> arr) {
    int d=arr.size()-1;
    int sum1=0, sum2=0;
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            if(i==j)
            sum1=sum1+arr[i][j];
            if(i+j==d)
            sum2=sum2+arr[i][j];
        }
    }
    return abs(sum1-sum2);

}
