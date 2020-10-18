#include <iostream>
#include <algorithm>
using namespace std;

bool checkallzero(long long int arr[], long long int n) {
	for (int i = 0;i < n;i++) {
		if (arr[i] != 0) {
			return false;
		}
	}
	return true;
}
long long int countunique(long long int arr[], long long int n) {
	
	long long int count = 0;
	for (long long int i = 0;i < n;i++) {
		while (i < n - 1 && (arr[i] == arr[i + 1] || arr[i] == 0)) {
			i++;
		}
		count++;
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long int n;
		cin >> n;
		long long int *arr = new long long int [n];
		for (long long int i = 0;i < n;i++) {
			cin >> arr[i];
		}
		bool flag = true;
		sort(arr, arr + n);
		long long int ans = countunique(arr, n);
		if (n == 1) {
			if (arr[0] == 0) {
				flag = false;
				cout << 0 << endl;
			}
		}
		else {
			
			if (checkallzero(arr, n)) {
				cout << 0 << endl;
				flag = false;
			}
		}
		if (flag == true) {
			if (ans == 0)
				cout << 1 << endl;
			else
				cout << ans << endl;
		}
	}

	return 0;
}