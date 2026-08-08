class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";
        reverse(s.begin(), s.end());
        for(int i=0;i<n;i++){
            string currentword="";
            while(i<n && s[i] != ' '){
                currentword += s[i];
                i++;
            }
            reverse(currentword.begin(), currentword.end());
            if(currentword.length() > 0){
                ans += " " + currentword;
            }
        }

    return ans.substr(1);
    }
};