class Solution {
  public:
    bool isSubSeq(string& s1, string& s2) {
        // code here
        int c=0,j=0,i=0;
        while(i<s1.size()&&j<s2.size())
        {
            if(s1[i]==s2[j]){
                c++;
                i++;
            }
            j++;
        }
        if(c==s1.size())return true;
        else return false;
    }
};