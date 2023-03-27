void bonAppetit(vector<int> bill, int k, int b) {
    long long sum=accumulate(bill.begin(),bill.end(),0);
    sum-=bill[k];
    sum/=2;
    if(b-sum==0)
    cout<< "Bon Appetit"<<endl;
    else 
    cout<< b-sum<<endl;

}
