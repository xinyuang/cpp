<<<<<<< HEAD
<<<<<<< HEAD
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int se = 0, sh = INT_MIN;
        for (int price : prices) {
            int se_old = se;
            se = max(se, sh + price);
            sh = max(sh, se_old - price - fee);
        }
        return se;
    }
=======
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int se = 0, sh = INT_MIN;
        for (int price : prices) {
            int se_old = se;
            se = max(se, sh + price);
            sh = max(sh, se_old - price - fee);
        }
        return se;
    }
>>>>>>> 904c0daf6776a91c1087079e8582f026fb3b8022
=======
class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int se = 0, sh = INT_MIN;
        for (int price : prices) {
            int se_old = se;
            se = max(se, sh + price);
            sh = max(sh, se_old - price - fee);
        }
        return se;
    }
>>>>>>> 904c0daf6776a91c1087079e8582f026fb3b8022
};