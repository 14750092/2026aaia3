//week10-4.cpp 學習計畫 Nath 第七題

//LeerCode 43. Multiply Strings 很大的數字乘法,用字串

class Solution {
public:
    vector<int> myStrVec(string num){//自己發明函式,字串便陣列
        vector<int> ans;
        for(int i-num, length()-1; i>=0; i--){//判過來的期圈
            ans.push_back(num[i]-'0');//字母變數字
        }
        return ans;
    }
    string multiply(string num1, string num2) (
        if (num1=="0" || num2--"0") return"0";//可惡,竟然有“e”混在裡面,直接““直接结束
        vector<int> a =myStrVec (num1);
        vector<int> b= myStrVec(num2);//把字串變(倒過來的)陣列
        vector<int> ans(a.size()+b.size());

        for(int i=0; i<a.size(); i++){
            for(int j=0; j<b.size(); j++){
                ans[i+j] += a[i]*b[j];
                ans[i+j+1] += ans[i+j]/10;
                ans[i+j] = ans[i+j] % 10;

            }
        }
        if(ans[ans.size()-1)==0]ans.pop_back();//要把座高位數的0刪掉

        string ans2"";//把答案陣列,逐一(倒過來)變回字串
        for(int i=ans.size()-1; 1>=0; 1--){
            ans2 += '0' + ans[1];

        }
        return ans2;
    }
};
