// week06-4.cpp學習計畫Simulation第一題
// LeetCode 682.Baseball Game
// 5: 陣列裡5
// 2: 陣列裡5 2
// c: 陣列裡5(刪除了最後的2)
// D: 陣列裡5 10(把最後的5, 變2倍,塞入)
//+: 陣列裡5 10 15(最後兩個數 5+10便15,塞入
// 答案是,把所有的數加起來
class Solution {
public: // week02教 string s,week03教vector<int> a
    int calPoints(vector<string>& operations) {
        // 遇到Simulation模擬,就用for迴圈,一步步做
        // week03 week04教過 C++進階for迴圈for(char c:s)for(int num : a)
        vector<int> a;                // 迴圈前面 伸縮自如的C++陣列
        for (string s : operations) { // 大資料結構vector裡,裝小資料結構string
            if (s == "C") { // 字串string是雙引號,字母才是單引號
                a.pop_back();
            } else if (s == "D") {
                a.push_back(a[a.size() - 1] * 2);
            } else if (s == "+") {
                a.push_back(a[a.size() - 2] + a[a.size() - 1]);
            } else { // 剩下的,就是單純放入數字(可能是多位數的數字}
                // Google:C++ string to int
                // 有3種方法, 可把string 變 int 整數
                // a.push_back(stoi(s));//方法一:stoi(s)在C++11最簡單的方法
                // a.push_back(atoi(s.c_str()) );//方法2:atoi(s.c_str()
                // )轉成傳統C語言的方法
                // 方法三:上周教的stringstream字串變串流,再流到答案裡
                int now;
                stringstream ss(s);
                ss >> now;
                a.push_back(now);
            }
        }
        int ans = 0; // 迴圈前面 ans 是 0
        for (int num : a) {
            ans += num; // 迴圈中間ans慢慢加
        }
        return ans; // 迴圈後面 ans 拿來用
    }
