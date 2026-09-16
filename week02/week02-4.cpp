///week02-4.cpp學習計畫 Basic 第2題
///LeetCode 309, Find the Difference
///整理一下左邊S的字母,再讓右邊T用掉。不用夠時,找到答案
class Soution{
public:
    char findTheDifference(string s, string t){
        int H[26]={};   //用陣列統計左邊S的字母,大括號{} 代表都是0
        for(char c :s){//c++進階for迴圈,可把字母(一個一個)取出來
           H[c -'a'] += 1; //統計字母出現次數(這個字母又多一個
        }
        for(char c :t){//c++進階for迴圈,可把字母(一個一個)取出來
         H[c -'a'] -= 1; //用掉一個字母
         if(H[c-'a']<0)
             return c;//這個字母不夠用,找到答案了!
        }
        return 0;
    }
};
