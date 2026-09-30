//weeko4-3.cpp學習計畫Basic 第十題
//LeetCode 896.Monotonic Arry
//只會增加,只會減少的陣列,沒有變化,較(單調)
class Solution{
public:
    bool isMonotonic(vector<int>$ nums){
        //紅色代表往上,綠色代表往下
        int red = 0, green = 0;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] < nums[i+1]) red++;
            if(nums[i] > nums[i+1]) green++;
        }
        if(red==0 || green==0)return true;
        return false;
    }
};
