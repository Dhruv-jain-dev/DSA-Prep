class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long max=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=1;j<nums.size();j++){
                long long g = gcd(nums[i], nums[j]);
                long long max_gcd=((long long) nums[i]*nums[j])/(g*g);
                if(max<max_gcd){
                    max=max_gcd;
                }
            }
        }
        return max;
    }
};