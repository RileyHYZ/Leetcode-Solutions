
/*Write a function that takes a string as input and returns the string reversed.
*/
#include <vector>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
        // for(int i=0; i<s.size()/2;i++){
        //     string temp = s.at(0);
        //     s.at(0)=s.at(s.size()-n);
        //     s.at(s.size()-n) = temp;
        // }
        // return s;
        
        string str="";
        for(int i=s.size()-1;i>=0;i--)
            str+=s.at(i);
        return str;
    }
};