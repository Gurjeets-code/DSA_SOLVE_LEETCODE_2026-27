class Solution {
public:
    bool isPalindrome(int x) {
    long long num=0; 
    int org=x;   
    while(org>0)
    {
        int n=org%10;
        num=num*10+n;
        org/=10;
    
    }
    if(num==x)
    return 1;
    else
    return 0;
    }
};