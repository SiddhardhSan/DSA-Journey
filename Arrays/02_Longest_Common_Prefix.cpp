// Status: WIP (Work In Progress)
// Brute-force approach.
// Passes most test cases. Need to fix edge cases.
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string str2;
         for(int i=0;i<strs.size();i++){
            if(i==0){
                str2=strs[0];
            }
            int j=0;
            while(j>=0 && j<strs[i].size() && j<str2.size()){
                if(strs[i][j]!=str2[j]){
                    str2.erase(j);
                    j=-2;
                }
                else if(j==strs[i].size()-1){
                    str2.erase(j+1);
                    j=-2;
                }
                j++;
            }
            
         }
         return {str2};
    }
};