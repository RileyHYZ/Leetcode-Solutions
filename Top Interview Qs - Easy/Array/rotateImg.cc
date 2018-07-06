/*You are given an n x n 2D matrix representing an image.
*Rotate the image by 90 degrees (clockwise).
*/
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int len = matrix[0].size();
        for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i=0; i<len;i++){
            for(int j=0;j<len/2;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][len-1-j];
                matrix[i][len-1-j]=temp;
            }
        }
    }
};