class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int left=0;
        int right=0;

        int ans=0;
        while(l<r){

            left=max(left,height[l]);
            
            right=max(right,height[r]);
            

        
        if(left<=right){
            ans+=left-height[l];
            l++;
        }
        else{
            ans+=right-height[r];
            r--;
        }
        
        }
        return ans;
    }
};