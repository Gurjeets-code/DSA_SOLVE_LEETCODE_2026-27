class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
    int r=mat.size();
    int c=mat[0].size();
    
    int rstart=0;
    int rend=r-1;
    while(rstart<= rend){
        int midr=rstart+(rend-rstart)/2;
        
        if(target>= mat[midr][0] && target<= mat[midr][c-1]){
            
            int start=0;
            int end=c-1;
            while(start<=end){
                int mid= start+(end-start)/2;
                if(mat[midr][mid]==target){
                    return true;
                }
                else if(target > mat[midr][mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                    
                }
            }
            return false;
            
        }
        else if(target < mat[midr][0]){
            rend=midr-1;
        }
        else{
            rstart=midr+1;
        }
    }
    return false;
    }
};