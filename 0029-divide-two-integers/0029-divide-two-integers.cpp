class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor!=0){
            if(dividend==INT_MIN && divisor==-1){
                return INT_MAX;
            }
            else{
                int quo = dividend / divisor;
                return quo;
            }
        }
        return 0;
    }
};