class Solution {
public:

bool isvalid(vector<int> nums, long long k, long long mid){
        long long currentcandy=0;
    if(mid==0){
        return false;
    }
    for(int n:nums){
        currentcandy+= n/mid;
    }

    if(currentcandy >= k){
        return true;
    }
    return false;
}

    int maximumCandies(vector<int>& candies, long long k) {
        
        long long maxcandies=INT_MIN;
        long long totalcandies=0;
        for(int n:candies){
            totalcandies+=n;
            if(n>maxcandies){
                
                maxcandies=n;
            }
        }
        if(totalcandies<k)
        return false;
        
        long long start=1;
        long long end=maxcandies;
        long long ans=0;
        while(start<=end){
            long long mid=start+(end-start)/2;

            if(isvalid(candies,k,mid)){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    return ans;
    }
};