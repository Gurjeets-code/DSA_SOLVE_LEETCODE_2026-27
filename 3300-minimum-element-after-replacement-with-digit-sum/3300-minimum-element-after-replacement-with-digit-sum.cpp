class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_val = INT_MAX;

        for(int i=0; i<nums.size(); i++){
            int num = nums[i];
            int digit_sum = 0;
    
            while(num > 0) {
                digit_sum += num % 10;
                num /= 10;
            }
            if(digit_sum < min_val) {
                min_val = digit_sum;
            }
        }

        return min_val;
    }
};
