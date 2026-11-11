//week10-2.cpp學習計畫 Nath 第1題
//LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;//失敗的例子
        for(int i=low; i<=high; i++){
            if(i%2==1) ans++;//失敗的例子
        }
        return ans;//竟然功了,等一下重來一次!!!
    }
};
