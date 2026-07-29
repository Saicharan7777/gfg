class Solution {
  public:
    int minSubsets(vector<int>& arr) {
        // code here
        
        int n = arr.size(), c = 1;
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n - 1; i++)
        {
            if(arr[i] + 1 != arr[i + 1]) c++;
        }
        
        return c;
        
    }
};
