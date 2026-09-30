///week04-2good.cpp 這是程式是對的,用進階c++迴圈
///但在CodeBlocks出錯,wearing: ranqe-based for only available with...
///2011年後,只有在-std=c++11或-std=gnu++11才能用
///所以,需要改一下設定: Settings-Compiler...
///選第2個(使用c++11 Iso國際標準的C++) 也就是 -std=c++11
///下面是week04的小考題目SOIT106_ADVANCE_012
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int>a;
    int now;
    for(int i=0; i<20; i++){
        cin >> now;
        if(now==0)break;
        a.push_back(now);
    }
    cin >> now;
    int ans = 0;
    for(int num : a){///在CodeBlocks 設定出錯時,永遠跑不出答案
        if(num==now) ans++;
    }
    cout << ans << "\n";
}///截圖時,請把Build messages裡面藍色
