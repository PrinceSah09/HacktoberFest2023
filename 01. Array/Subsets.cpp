class Solution {
public:
  void sub(vector<int>& arr, int i, vector<int>& subarr,      
  vector<vector<int>>& ans)
  {
      if(i==arr.size())
      {
         ans.push_back(subarr);
         return;
      }
      else
      {
          subarr.push_back(arr[i]);
          sub(arr, i+1, subarr, ans);
          subarr.pop_back();
          sub(arr, i+1, subarr, ans);
      }
  }
    vector<vector<int>> subsets(vector<int>& arr) 
    {
        vector<vector<int>> ans;
        vector<int> subarr;
        sub(arr, 0, subarr, ans);
        return ans;
    }
};
