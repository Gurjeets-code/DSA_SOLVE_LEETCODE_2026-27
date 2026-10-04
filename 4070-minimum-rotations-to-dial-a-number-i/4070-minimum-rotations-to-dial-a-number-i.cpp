class Solution {
public:
    int minRotations(string s) {
        int index='0';
        int ans=0;
        for(char ch:s){
            int diff=abs(index-ch);
            ans+=min(diff, 10-diff);
            index=ch;
        }
        return ans;
    }
};