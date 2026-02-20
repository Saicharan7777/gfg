class Solution {
  public:
    
    static bool compare(string a, string b)
    {
        return a+b>b+a;
    }
    string findLargest(vector<int> &arr) {
        // code herea
        int n=arr.size();
        vector<string>r;
        for(int i=0;i<n;i++)
        {
            r.push_back(to_string(arr[i]));
        }
        sort(r.begin(),r.end(),compare);
        string  v="";
        for(int i=0;i<n;i++)
        {
            v+=r[i];
        }
        if(v[0]=='0')return "0";
        
        return v;
    }
};