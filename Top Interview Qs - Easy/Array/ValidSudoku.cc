// Determine if a 9x9 Sudoku board is valid
#include <vector>
using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int b=0,c=0;
        while(b<9){
            c=0;
            vector<int> checkVert{0,0,0,0,0,0,0,0,0};
            vector<int> checkHori{0,0,0,0,0,0,0,0,0};
            vector<int> checkSub{0,0,0,0,0,0,0,0,0};
            while(c<9){
                int m=3*(b/3)+c/3, n=b%3*3+c%3;
                char v=board[b][c], h=board[c][b], s=board[m][n];
                int vn = v-'0',hn = h-'0', sn = s-'0';
                if((v!='.' && checkVert[vn-1]==1)||
                   (h!='.' && checkHori[hn-1]==1)||
                   (s!='.' && checkSub[sn-1]==1)) return false;
                if(v!='.') checkVert[vn-1]=1;
                if(h!='.') checkHori[hn-1]=1;
                if(s!='.') checkSub[sn-1]=1;
                c++;
            }
            b++;
        }
        
        return true;
        
    }
};