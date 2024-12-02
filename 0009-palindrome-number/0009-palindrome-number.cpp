class Solution {
public:
    bool isPalindrome(int x) {
        int r;
        int n=x;
        long rev = 0;
        while(n > 0){
        r = n%10;
        rev = rev*10+r;
        n= n/10;
        }

        if(x==rev)
        return true;
        
        else
        return false;
    }
};