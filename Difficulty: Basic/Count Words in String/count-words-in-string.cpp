class Solution {
  public:
    int countWords(string &s) {

        // code here
        int c=1;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' '){c++;}
        }
        return c;
    }
};
