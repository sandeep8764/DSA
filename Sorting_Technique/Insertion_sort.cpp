// Programme for Insertion Sort 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        // Insertion Sort
        for(int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i - 1;

            while(j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = key;
        }

        return nums[n - k];
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;

    cout << sol.findKthLargest(nums, k);
}
