//week09-4.cpp SoIt106_ADVANCE_009
//要發明int f(int n) 函式,反過來
#include <iostream>
using namespace std;
void f(int n){//函式呼叫函式
	if(n==0)return;
	cout << n%10;
	f(n/10);
}
int main()
{
	int N;
	cin >> N;
	f(N);//用函示呼叫函式,把這題解決
	cout << "\n";
}
