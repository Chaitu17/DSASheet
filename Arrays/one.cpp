class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        int i = 0;
        int fin = 0;
        while(i<n) {
            res[nums[i]-1]++;
            if(res[nums[i]-1]==2) {
                fin = nums[i];
                return nums[i];
            }
            i++;
        }
        return fin;
    }
};
