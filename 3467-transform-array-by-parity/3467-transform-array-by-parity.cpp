class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        int evencount=0, oddcount=0;
        for(int x:nums){
            if(x % 2==0){
                evencount++;
            }
            else{
                oddcount++;
            }
        }
        for(int i=0;i<evencount;i++){
            nums[i]=0;
        }
        for(int i=evencount;i<n;i++){
            nums[i]=1;
        }
        return nums;
    }
};