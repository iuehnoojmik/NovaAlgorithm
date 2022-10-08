// #2750	
// 문제: N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
// 입력: 첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수 주어진다. 
//		 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
// 출력: 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
// Insertion sort 사용

#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int A[1000];

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

	int i, j, temp;
	for (i = 1; i < n; i++) {
		j = i - 1;
		for (j = i - 1; j >= 0 && A[j] > A[j + 1]; j--) {
			temp = A[j + 1];
			A[j + 1] = A[j];
			A[j] = temp;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << A[i] << "\n";
	}

	return 0;
}