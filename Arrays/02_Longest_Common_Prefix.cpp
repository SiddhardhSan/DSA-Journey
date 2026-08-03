#include <iostream>
#include <vector>
#include <string>

using namespace std;

// TODO (Future Me):
// Accepted using a brute-force approach.
// Revisit after solving 15-20 more array problems.
// Try to simplify the implementation.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str2;

        if (strs.empty() || strs[0] == "") {
            return "";
        }
        else {
            str2 = strs[0];
        }

        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].empty()) {
                return "";
            }

            int j = 0;
            while (j >= 0 && j < strs[i].size() && j < str2.size()) {
                if (strs[i][j] != str2[j]) {
                    str2.erase(j);
                    break;
                }
                else if (j == strs[i].size() - 1) {
                    if ((j + 1) < str2.size()) {
                        str2.erase(j + 1);
                    }
                    break;
                }
                j++;
            }
        }

        return str2;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter the strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    cout << "Longest Common Prefix: "
         << obj.longestCommonPrefix(strs) << endl;

    return 0;
}