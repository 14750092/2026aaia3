//week08-1b.cpp學習計畫Matrix 第1提 最有錢的錢
//LeetCode 1672.Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        int ans = 0; //最有錢的人, 有多少錢?(先射程0)
        for(int i=0; i<M; i++){//左手i 範圍M
            int now = 0;//小迴圈前面 now 是 0
            for(int j=0; j<N; j++){//右手j範圍N
                now += accounts[i][j];//小迴圈中間now +=
            }
           if(now >ans)ans = now;//小迴圈後面now拿出來用
        }
         return ans ;
    }
};
