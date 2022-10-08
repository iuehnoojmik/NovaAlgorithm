// #2750	
// 문제: N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
// 입력: 첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000,000)이 주어진다. 
//		 둘째 줄부터 N개의 줄에는 숫자가 주어진다. 
//		 이 수는 절댓값이 1,000,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
// 출력: 첫째 줄부터 N개의 줄에 내림차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
// Merge sort 구현

#include <iostream>
using namespace std;

int arr[1'000'000];
int sorted[1'000'000];
void merge_conquer(int l, int r);
void merge_sort(int left, int right);

int main() {
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}

}


void merge_sort(int left, int right) {
	int mid = (left + right) / 2;

	if (left == right)
		return;

	else {
		merge_sort(left, mid);
		merge_sort(mid + 1, right);
		merge_conquer(left, right);
	}

}

void merge_conquer(int left, int right) {
	int mid = (left + right) / 2;
	int l = left;
	int r = mid + 1;
	int k = left;

	while (l <= mid && r <= right) {
		if (arr[l] < arr[r])
			sorted[k++] = arr[r++];
		else
			sorted[k++] = arr[l++];
	}

	if (l > mid)
	{
		for (int a = r; a <= right; a++)
			sorted[k++] = arr[a];
	}
	else
	{
		for (int a = l; a <= mid; a++)
			sorted[k++] = arr[a];
	}

	for (int i = left; i <= right; i++) {
		arr[i] = sorted[i];
	}
}
