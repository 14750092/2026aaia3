///week02-2.cpp 要使用
#include <iostream>///上週教的
#include <string> ///今天新 教的
using namespace std;///使用std命名空間
int main()
{
    ///就不用再寫一堆 std::
    cout<<"請輸入你的名字: ";
    string name; /// 使用標準的(字串)
    cin>>name;
    cout << name <<"你好,你會用字串了";
}
