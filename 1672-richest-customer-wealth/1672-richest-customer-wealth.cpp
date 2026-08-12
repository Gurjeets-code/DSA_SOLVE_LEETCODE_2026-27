class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows=accounts.size();
        int cols=accounts[0].size();
        int maxwealth=0;
        for(int i=0; i<rows; i++){

            int currentwealth=0; 

            for(int j=0; j<cols; j++){
                currentwealth += accounts[i][j];
            }
            maxwealth=max(maxwealth, currentwealth);
        }

        return maxwealth;
    }

};