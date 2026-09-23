//week03-2.cpp學習計畫Basic第6題
//LeetCode 283.Move Zeroes
//把0一道右邊去,等於(不是0的放左邊)再補0
class Solution{
public:
     void moveZeroes(vecctor<int>& nums){
           int k = 0;// aj41ul z;4y94s83xu3nums[k]
           for(int num :nums){//C++進階for迴圈
             if(num !=0)}{
                  nums[k]=num;//把數字放左邊
                  k++;//換下一格
              }
            }
            //把殘留的,都變成0
            for(int i=k; i<nums.size(); i++){
                nums[i] = 0;
             }
      }
};
