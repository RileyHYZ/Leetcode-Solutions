/* Given a 32-bit signed integer, reverse digits of an integer.
*Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. 
*For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
*/
#include <string>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int temp=0, y=0;
        while(x){
            temp = y*10 + x%10;
            if(temp/10!=y) return 0;
            x/=10;
            y=temp;
        }
        return y;
    }
};



