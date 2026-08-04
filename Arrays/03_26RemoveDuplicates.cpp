#include <iostream>
#include <vector>

using namespace std;

// TODO:
// Accepted using a manual shifting approach.
// Try solving this without shifting elements.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();

        if (s == 0) {
            return 0;
        }

        for (int i = 1; i < s; i++) {
            if (nums[i - 1] == nums[i]) {
                for (int j = i; j < s - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                s--;
                i--;
            }
        }

        return s;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter size of vector: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int newSize = obj.removeDuplicates(nums);

    cout << "New size: " << newSize << endl;

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}