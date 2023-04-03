class Student :  public Person{
	private:
		vector<int> s;
	public:
       Student(string sn, string ln, int d, vector<int> ss) : Person(sn,ln,d){
         s=ss;
       }
      char calculate()
      {
          int avg,sum=0;
          for(int i=0;i<s.size();i++)
          {
              sum+=s[i];
          }
          avg=sum/s.size();
          if(avg>=90)
          return 'O';
          else if(avg>=80)
          return 'E';
          if(avg>=70)
          return 'A';
          if(avg>=55)
          return 'P';
          if(avg>=40)
          return 'D';
          else
          return 'T';
      }
};
