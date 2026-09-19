class Solution {
public:
    int choice(char n) {
        switch (n) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    }

    int romanToInt(string s) {
        int ans = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int current = choice(s[i]);
            if (i + 1 < n) {
                int next = choice(s[i + 1]);
                if (current >= next) {
                    ans += current;
                } else {
                    ans -= current;
                }
            } else {
                ans += current;
            }
        }
        return ans;
    }
};
