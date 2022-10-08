// #2751	
// ����: N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է�: ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����. ��° �ٺ��� N���� �ٿ��� ���� �־�����. 
// �� ���� ������ 1,000,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
// ���: ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
// STL sort�Լ� ���

#include <iostream>
#include <algorithm>
using namespace std;

int A[1000000];

int main() {
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	sort(A, A + n);

	for (int i = 0; i < n; i++) {
		cout << A[i] << "\n";
	}

	return 0;
}