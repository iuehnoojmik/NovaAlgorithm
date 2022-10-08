// #2750	
// ����: N���� ���� �־����� ��, �̸� ������������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �Է�: ù° �ٿ� ���� ���� N(1 �� N �� 1,000,000)�� �־�����. 
//		 ��° �ٺ��� N���� �ٿ��� ���ڰ� �־�����. 
//		 �� ���� ������ 1,000,000���� �۰ų� ���� �����̴�. ���� �ߺ����� �ʴ´�.
// ���: ù° �ٺ��� N���� �ٿ� ������������ ������ ����� �� �ٿ� �ϳ��� ����Ѵ�.
// Merge sort ����

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
