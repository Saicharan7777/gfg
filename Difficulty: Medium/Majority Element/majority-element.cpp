class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int count = 0, element = 0, n = arr.size();

        for(int val : arr)
        {
            if(count == 0)
            {
                element = val;
                count++;
            }
            else if(element == val)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        
        int count1 = 0;
        for(int val : arr)
        {
            if(element == val) count1++;
        }
        if(count1 > n/2) return element;
        else return -1;
    }
};