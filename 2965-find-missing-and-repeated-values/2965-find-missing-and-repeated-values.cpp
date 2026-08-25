class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& nums) {
        unordered_set<int> seen;
        int n=nums.size();
        int a=0,b=0;
        int totalsum=0, actualsum=0;

        vector<int> ans;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualsum+=nums[i][j];
                if(seen.find(nums[i][j]) != seen.end()){
                    a=nums[i][j];
                    ans.push_back(a);
                }

                seen.insert(nums[i][j]);
            }
        }

        totalsum=(n*n) * (n*n +1)/2;
        b=totalsum+a-actualsum;
        ans.push_back(b);
        return ans;
    }
};