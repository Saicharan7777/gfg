class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        int n=arr.size();
        map<int,int>r;
        for(int i=0;i<n;i++)
        {
            r[arr[i]]++;
        }
        
        vector<int>m;
        for(int i=low;i<=high;i++)
        {
            if(r.count(i)==1)continue;
            else m.push_back(i);
        }
        return m;
    }
};