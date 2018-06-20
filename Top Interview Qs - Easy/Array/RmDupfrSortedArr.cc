#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> nondup;
        if(nums.size()!=0){
            nondup.push_back(nums.at(0));
            // sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
                if(nums.at(i+1)!=nums.at(i)) nondup.push_back(nums.at(i+1));
            }
            nums=nondup;
        }
        return nums.size();
    }
    
};