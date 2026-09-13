//weeek01-3.cpp學習計畫 basic 第三題
//leetcode find the Index of the Occurrence in a string
//大海撈針(在一堆稻草堆哩,找一枝真的)
class Solution{
public:
  int strStr(string haystack, string needle){
      //所有程式題目,都可以用for(迴圈)if(判斷); //函示呼叫
                           //字串長度
  for(int i=0; i<=N1-N2; i++){//迴圈
    if(haystack.subster(i,N2) ==needle)
      return i;//找到答案
    //如果大字串的.subster(開始,長度)
    等於 小字串,就找到答案了
  }
  return -1;//找不到
}
