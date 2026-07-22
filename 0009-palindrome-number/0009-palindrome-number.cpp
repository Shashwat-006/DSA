class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long rev=0;
        int ori=x;
        while(x>0){
            int rem=x%10;
            x=x/10;
            rev=(rev*10)+rem;
        }
        return rev==ori;
    }
};