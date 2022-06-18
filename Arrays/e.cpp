class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        for(int i=0; i<n; ++i) {
            if(i!=index && nums[i]!=0) {
                swap(nums[i],nums[index]);
                index++;
            }
            else if(i==index && nums[i]!=0) {
                index++;
            }
        }
    }
};
