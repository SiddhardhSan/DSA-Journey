
#include <iostream>
#include <vector>
// TODO (Future Me):
// Accepted on LeetCode.
// Second attempt using an extra-space approach.
// Revisit later to solve it using the optimal in-place O(n) solution.
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;
        int s = nums.size();

        if (nums.empty()) {
            cout << 0;
            return 0;
        }
        else {
            nums.push_back(nums[0]);
        }

        while (j < s) {
            if (nums[i] != nums[j]) {
                nums.push_back(nums[j]);
                i = j;
                j++;
            }
            else {
                j++;
            }
        }

        int k = s;

        for (int i = 0; (i < k) && (s < nums.size()); i++) {
            nums[i] = nums[s];
            s++;
        }

        return nums.size() - k;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array after operation: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}