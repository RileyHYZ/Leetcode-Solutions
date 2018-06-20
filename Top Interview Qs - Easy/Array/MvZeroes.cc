/*Given an array nums, write a function to move all 0's to the end of it 
*while maintaining the relative order of the non-zero elements.
*/
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=nums.size();
        int i=0,j=0;
        while(i<c&&j<c){
            if(nums[j]!=0) nums[i++]=nums[j++];
            else j++;
        }
        for(int k=i;k<j;k++)
            nums[k]=0;
    }
};