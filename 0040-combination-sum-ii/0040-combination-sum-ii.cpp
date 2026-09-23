class Solution {
public:

void combine(vector<int> &nums, int index, int target, vector<int>&combination, vector<vector<int>> &ans){
    if(target==0){
        ans.push_back(combination);
        return;
    }
    
    if(index==nums.size() || target<0){
        return;
    }

    combination.push_back(nums[index]);
    combine(nums,index+1,target-nums[index],combination,ans);

    combination.pop_back();
    while(index+1 < nums.size() && nums[index]==nums[index+1]){
        index++;
    }
    combine(nums,index+1,target,combination,ans);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        combine(candidates,0,target,combination,ans);
        return ans;
    }
};