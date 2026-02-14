#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {64, 25, 12, 22, 11};

    int n = nums.size();

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        swap(nums[i], nums[minIndex]);
    }

    for(int x : nums) {
        cout << x << " ";
    }

    return 0;
}
