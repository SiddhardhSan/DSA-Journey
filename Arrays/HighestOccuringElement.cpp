#include <iostream>
#include <vector>
using namespace std;

int mostFrequentElement(vector<int>& nums) {
    int max=0;
    for(int i=0;i<(nums.size());i++){
        if(nums[i]>max){
            max=nums[i];
        }
    }
    int hasharray[max+1]={0};
    for(int j=0;j<(nums.size());j++){
        hasharray[nums[j]]++;
    }
    int large=0;
    for(int k=1;k<(max+1);k++){
        if(hasharray[k]>hasharray[large]){
            large=k;
        }
    }
    return large;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};

    cout << mostFrequentElement(nums);

    return 0;
}