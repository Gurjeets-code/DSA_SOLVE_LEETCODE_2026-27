class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int i=0,j=n-1;
        int left=0;
        int right=0;

        int ans=0;
        while(i<j){

            left=max(left,height[i]);
            
            right=max(right,height[j]);
            

        
        if(left<=right){
            ans+=left-height[i];
            i++;
        }
        else{
            ans+=right-height[j];
            j--;
        }
        
        }
        return ans;
    }
};