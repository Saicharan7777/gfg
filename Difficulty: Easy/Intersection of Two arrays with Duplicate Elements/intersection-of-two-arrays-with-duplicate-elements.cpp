class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        int m=a.size(),n=b.size();
        unordered_set<int>r(a.begin(),a.end());
        vector<int>arr;
        for(int j=0;j<n;j++)
        {
            if(r.count(b[j]))
            {
                arr.push_back(b[j]);
                r.erase(b[j]);
            }
        }
        return arr;
        
    }
};