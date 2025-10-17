class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int t=0;
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            t=target-arr[i];
            if(m.find(t)!=m.end())
            {
                return true;
            }
            m[arr[i]]=i;
        }
        return false;
    }
};