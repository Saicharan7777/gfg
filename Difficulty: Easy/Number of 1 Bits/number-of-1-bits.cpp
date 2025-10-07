class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int c=1;
        while(n!=1)
        {
            if(n%2!=0)c++;
            n=n/2;
        }
        return c;
    }
};