/*Say you have an array for which the ith element is the price of a given stock on day i.
 *Design an algorithm to find the maximum profit. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int c=prices.size()-1;
        for(int i=0;i<c;i++){
            if(prices[i+1]>prices[i]) max+=prices[i+1]-prices[i];
        }
        return max;
    }
};