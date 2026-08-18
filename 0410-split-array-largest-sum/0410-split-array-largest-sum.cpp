class Solution {
public:
   
    bool isvalid(const vector<int>& nums, int k, int mid) {
        int n = nums.size();
        int sum = 0;
        int candidate = 1;
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            
            if (sum > mid) {
                candidate++;
                sum = nums[i];
            }
        }
        
        return candidate <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int maxsum = 0;
        int maxelement = 0;
        
        for (int i = 0; i < n; i++) {
            maxsum += nums[i];
            if (nums[i] > maxelement) {
                maxelement = nums[i];
            }
        }
        
        int start = maxelement;
        int end = maxsum;
        int ans = maxsum; 
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            
            if (isvalid(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        
        return ans;
    }
};
