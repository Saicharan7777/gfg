class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        map<int,int> r;
        vector<int>v;
        int n=a.size();
        int m=b.size();
        for(int i=0;i<n;i++)
        {
            if(r[a[i]]==0)
            {
                r[a[i]]=1;
                v.push_back(a[i]);
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if(r[b[i]]==0)
            {
                r[b[i]]=1;
                v.push_back(b[i]);
            }
        }
        
        return v;
        
    }
};