#include <stdio.h>
#include <stdlib.h>
int init(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 1;
	}
	return 0;
}
int empty(int *arr,int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	return 0;
}
int reverse(int *arr,int n) {
		int t;
		for (int i = 0; i < n / 2; i++) {
			t = arr[n - i-1];
			arr[n - i-1] = arr[i];
			arr[i] = t;
		}
		for (int j = 0; j < n; j++) {
			printf("%d\n", arr[j]);
		}
		return 0;
	}
	

int main() {
	int arr[9] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("%d", reverse(arr, n));
	printf("%d", init(arr,n));
	printf("%d", empty(arr, n));
	system("pause");
	return 0;
}