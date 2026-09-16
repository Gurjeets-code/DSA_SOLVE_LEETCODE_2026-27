#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void getpermute(vector<int>& nums, vector<vector<int>>& ans, int ind) {
        if (ind == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            swap(nums[i], nums[ind]);      
            getpermute(nums, ans, ind + 1); 
            swap(nums[i], nums[ind]);      
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;           
        int ind = 0;
        getpermute(nums, ans, ind);
        
        return ans;
    }
};
