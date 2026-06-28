class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int max=nums.size();
        int total_sum=max*(max+1)/2;
        int sum=0;
        for(int i=0;i<max;i++){
            sum+=nums[i];
        }
        if(sum!=total_sum){
            return (total_sum-sum);
        }
        return 0;
    }
};