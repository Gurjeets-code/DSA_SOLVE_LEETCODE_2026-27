class Solution {
public:
    void getsubset(vector<int>& nums, vector<int> &ans, int i, vector<vector<int>> &allsubsets){
  
        if(i == nums.size()){
            allsubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getsubset(nums, ans, i + 1, allsubsets);
        ans.pop_back();
        int ind = i + 1;
        while(ind < nums.size() && nums[ind] == nums[i]){
            ind++;
        }
        getsubset(nums, ans, ind, allsubsets);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> allsubsets;
        vector<int> ans;
        getsubset(nums, ans, 0, allsubsets);
        return allsubsets;
    }
};   