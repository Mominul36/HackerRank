//https://www.hackerrank.com/challenges/funny-string/problem?isFullScreen=false
string funnyString(string s) {
    string ss= s;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size()-1;i++)
    {
        if(abs(s[i]-s[i+1])!=abs(ss[i]-ss[i+1]))
        return "Not Funny";
    }
    return "Funny";

}
