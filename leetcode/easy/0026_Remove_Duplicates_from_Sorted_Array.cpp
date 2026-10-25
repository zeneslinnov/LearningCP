class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int unique = 1;
        int slow = 0;
        int N = nums.size();
        
        if(N>1){
            for(int fast=0; fast<N; fast++){
                if(nums[fast] != nums[slow]){
                    slow++;
                    nums[slow] = nums[fast];
                    unique++;
                }
            }
        }
        return unique;
    }
};
