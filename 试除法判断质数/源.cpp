#include <iostream>
using namespace std;
bool is_prime(int x) {
	if (x < 2) return false;
	for (int i = 2; i <= x / i; i++)        //  ��/����ʾ�����������������������������С�����ֱ�����
		if (x%i == 0)                       //  ��%����ģ�����ɵ�һ�������Եڶ��������������������������붼Ϊ����
			return false;
	return true;
}

int main() {
	int n;
	cin >> n;                               //����n���������ж�ÿ�������Ƿ�Ϊ����
	while (n--) {
		int x;
		cin >> x;
		if (is_prime(x))puts("Yes");
		else puts("No");
	}
	return 0;
}