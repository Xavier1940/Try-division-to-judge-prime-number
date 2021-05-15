#include <iostream>
using namespace std;
bool is_prime(int x) {
	if (x < 2) return false;
	for (int i = 2; i <= x / i; i++)        //  “/”表示除，如果两个操作数都是整数，则小数部分被丢弃
		if (x%i == 0)                       //  ”%”求模，生成第一个数除以第二个数的余数，两个操作数必须都为整数
			return false;
	return true;
}

int main() {
	int n;
	cin >> n;                               //给出n个整数，判断每个整数是否为质数
	while (n--) {
		int x;
		cin >> x;
		if (is_prime(x))puts("Yes");
		else puts("No");
	}
	return 0;
}