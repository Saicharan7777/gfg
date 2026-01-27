// User function Template for C++
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());

        int c=0,l=0,h=arr.size()-1;
        while(l<=h)
        {
            if(arr[l]+arr[h]<target)
            {
                c+=(h-l);
                l++;
            }
            else
            {
                h--;
            }
        }
        return c;
    }
};
