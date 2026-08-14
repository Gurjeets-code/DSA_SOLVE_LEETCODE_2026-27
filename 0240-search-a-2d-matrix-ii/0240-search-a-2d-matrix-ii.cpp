class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int rows=mat.size();
        int cols=mat[0].size();
        int start=0,end=cols-1;
        while(start<rows && end>=0){
            if(target == mat[start][end]){
                return true;
            }
            else if(target < mat[start][end]){
                end--;
            }
            else{
                start++;

            }
        }
        return false;
    }
};