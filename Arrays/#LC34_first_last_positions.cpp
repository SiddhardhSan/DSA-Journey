#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> startstop;
        int j = 0;
        int k = 0;

        if (nums.empty()) {
            startstop.push_back(-1);
            startstop.push_back(-1);
            return startstop;
        }

        for (int i = 0; i < nums.size(); i++) {
            if ((j != 1) && (nums[i] == target)) {
                startstop.push_back(i);
                j = 1;
            }
            else if ((j == 1) && (k == 0) && (nums[i] == target)) {
                startstop.push_back(i);
                k++;
            }
            else if ((j == 1) && (k == 1) && (nums[i] == target)) {
                startstop[1] = i;
            }
        }

        if (startstop.empty()) {
            startstop.push_back(-1);
            startstop.push_back(-1);
            return startstop;
        }
        else {
            return startstop;
        }
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

    int target;
    cout << "Enter target: ";
    cin >> target;

    vector<int> result = obj.searchRange(nums, target);

    cout << "Range: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}