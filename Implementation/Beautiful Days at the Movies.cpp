long long rev(long long n)
{
    long long sum=0;
    while(n)
    {
        sum=(sum*10)+(n%10);
        n/=10;
    }
    return sum;
}
int beautifulDays(int a, int b, int k) {
     int c=0;
     for(int i=a;i<=b;i++)
     {
         if(abs(i-rev(i))%k==0)
         c++;
     }
     return c;
}
