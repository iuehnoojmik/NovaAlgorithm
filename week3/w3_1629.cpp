// #1629	
// 문제: 자연수 A를 B번 곱한 수를 알고 싶다. 
// 단 구하려는 수가 매우 커질 수 있으므로 이를 C로 나눈 나머지를 구하는 프로그램을 작성하시오.
// 입력: 첫째 줄에 A, B, C가 빈 칸을 사이에 두고 순서대로 주어진다. 
//		 A, B, C는 모두 2,147,483,647 이하의 자연수이다.
// 출력: 첫째 줄에 A를 B번 곱한 수를 C로 나눈 나머지를 출력한다.
// 재귀함수 활용, mod의 특성을 이용하여 longlong의 데이터범위 조절

#include <iostream>
using namespace std;

int a, b, c = 0;

int asdf(int a, int b, int c);

int main() {
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> a >> b >> c;

	cout << asdf(a, b, c);

	return 0;
}

int asdf(int a, int b, int c) {
	if (b == 1)
		return a % c;

	if (b % 2 == 0) {
		long long tmp = asdf(a, b / 2, c);
		return (tmp * tmp) % c;
	}
	else {
		b = b / 2;
		long long tmp;
		tmp = asdf(a, b, c);
		return (((tmp * tmp) % c) * a) % c;
	}
}
