class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==1){
            return true;
        }
        if (n==-1 or n==0){
            return false;
        }
        else{
            while(n%3==0){
                    n=n/3;
                    cout<<"n="<<n<<endl;
            }
            if(n==1){
                return true;
            }
            else{
                return false;
            }
        }
    }
};