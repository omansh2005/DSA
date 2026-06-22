class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0; // Pointer for the last unique element found
        
        for (int j = 1; j < nums.size(); j++) {
            // If current element is different from the last unique element
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j]; // Move the unique element forward
            }
        }
        
        // i is the index, so length is i + 1
        return i + 1;
        
    }
};