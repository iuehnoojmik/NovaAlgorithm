#include <iostream>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	int A[1000];

	for (int i = 0; i < n; i++)
	{
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

	cout << A[n - k];

	return 0;
}