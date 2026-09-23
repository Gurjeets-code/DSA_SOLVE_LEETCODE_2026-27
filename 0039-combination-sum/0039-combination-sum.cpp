class Solution {
public:

void combine(vector<int> &nums, int index, int target, vector<int>&combination, vector<vector<int>> &ans){
    if(index==nums.size() || target<0){
        return;
    }
    if(target==0){
        ans.push_back(combination);
        return;
    }

    combination.push_back(nums[index]);
    combine(nums,index,target-nums[index],combination,ans);

    combination.pop_back();
    combine(nums,index+1,target,combination,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> ans;

        combine(candidates,0,target,combination,ans);
        return ans;
    }
};