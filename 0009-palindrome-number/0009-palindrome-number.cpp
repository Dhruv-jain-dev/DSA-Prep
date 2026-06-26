class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp=x;
        long long check=0;
        while(x>0){
            check=check*10+(x%10);
            x=x/10;
        }
        if(check==temp){
            return true;
        }
        return false;
    }
};