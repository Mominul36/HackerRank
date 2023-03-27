int viralAdvertising(int n) {
    int share=5,like=0;
    for(int i=1;i<=n;i++)
    {
        int d = share/2;
        like+=d;
        share=d*3;
    }
   return like;
}
