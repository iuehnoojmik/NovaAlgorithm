// #1629	
// ����: �ڿ��� A�� B�� ���� ���� �˰� �ʹ�. 
// �� ���Ϸ��� ���� �ſ� Ŀ�� �� �����Ƿ� �̸� C�� ���� �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է�: ù° �ٿ� A, B, C�� �� ĭ�� ���̿� �ΰ� ������� �־�����. 
//		 A, B, C�� ��� 2,147,483,647 ������ �ڿ����̴�.
// ���: ù° �ٿ� A�� B�� ���� ���� C�� ���� �������� ����Ѵ�.
// ����Լ� Ȱ��, mod�� Ư���� �̿��Ͽ� longlong�� �����͹��� ����

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