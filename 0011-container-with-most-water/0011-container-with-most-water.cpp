class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumwater=0;
        int start=0;
        int end=height.size()-1;
        while(start<end){
            int high=min(height[start],height[end]);
            int width=end-start;
            int current=high*width;
            maximumwater=max(maximumwater,current);

            height[start] < height[end] ? start++ : end--;
        }
        return maximumwater;
    }
};