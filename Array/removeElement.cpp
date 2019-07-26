class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        if (nums.size() == 1 && nums[0] == val) {
            return 0;
        }
        else if (nums.size() == 1 && nums[0] != val) {
            return 1;
        }
        else {
            for (int i = 0; i<nums.size();i++ ) {
                nums[k] = nums[i];
                if (nums[i] != val) {
                    k++;
                }
            }
        
        }
        return k;
    }
};
