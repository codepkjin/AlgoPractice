class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;

        int i = 0, j;

        while (i < prices.size() - 1) {
            j = i + 1;
            while (j < prices.size()) {
                if (prices[j] - prices[i] > maxProfit) {
                    maxProfit = prices[j] - prices[i];
                }
                else if (prices[i] >= prices[j]) {
                    break;
                }
                j++;
            }
            i++;
        }


        return maxProfit;
    }
};
