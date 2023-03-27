int chocolateFeast(int n, int c, int m) {
   int x = n/c;
   int k=x;
   while(1)
   {
      int d= k/m;
      x+=d;
      k = (k%m) + d;
      if(k<m)
      break;   
   }
   return x;
}
