class Solution {
public:
    int addDigits(int num) {
        int c=0;
        if (num<10){
            return num;
        }
        while(num>=10){
            c=0;
            while(num>0){
                c+=num%10;
                num=num/10;
            }
            num=c;
        }
        return c;
    }
};