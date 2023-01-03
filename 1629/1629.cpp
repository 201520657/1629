#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

long long a, b, c;

long long cal(long long x, long long y) {
	long long temp, ret;

	if (y == 1) {
		return x % c;
	}

	else {
		temp = cal(x, y / 2);
		ret = (temp * temp) % c;

		if (y % 2 == 1) {
			ret = (ret * (x % c)) % c;
		}

		return ret;
	}
}

// �ð����⵵ ����ؼ� O(logN)���� �����ϱ�ڡ�
// �ڷ��� �Ű澲��ڡ�
// 
// ��ⷯ ������ ���� �����ڡ�
// a^2 % c = (a * a) % c = [(a % c) * (a % c)] % c
// a^3 % c = (a^2 * a) % c = [(a^2 % c) * (a % c)] % c = [[(a % c) * (a % c)] % c * (a % c)] % c
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "rt", stdin);

	cin >> a >> b >> c;

	cout << cal(a, b) << "\n";
	return 0;
}