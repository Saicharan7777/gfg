class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int c=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>c)c=arr[i];
        }
        return c;
    }
};
