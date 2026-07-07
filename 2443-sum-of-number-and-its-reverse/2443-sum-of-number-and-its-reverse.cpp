class Solution {
public:
    int reverse(int n){
       int temp=0;
        while(n!=0){
            temp=temp*10+n%10;
            n=n/10;
        }
        return temp;
    }
    bool sumOfNumberAndReverse(int num) {
        if(num==0){
            return true;
        }
        else{
            for(int i=0;i<num;i++){
            int sum=i+reverse(i);
            if(sum== num){
                return true;
            }
        }
        }
        return false;
    }
};