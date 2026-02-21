class Solution {
  public:
    int hIndex(vector<int>& citations) {
        // code here
         int n=citations.size();
        vector<int>b(n+1,0);
        for(int i=0;i<n;i++)
        {
            if(citations[i]>=n)b[n]++;
            else b[citations[i]]++;
        }
        int c=0;
        
        for(int i=n;i>=0;i--)
        {
            c+=b[i];
            if(c>=i)return i;
        }
        return 0;
    }
};