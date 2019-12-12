#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int rank(int *arr,int size, int n) {
	int left = 0, right = size-1;
	int mid = (left + right ) / 2;
	while (left <= right) {
		if (n > arr[mid]) {
			left = mid+1;
			mid = (left + right) / 2;
		}
		else if (n < arr[mid]) {
			right = mid-1;
			mid = (left + right) / 2;
		}
		else if (n == arr[mid])
			return mid;
	}
	return -1;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17 };
	int size = (sizeof(arr) / sizeof(arr[0]));
	int n = 1;
	printf("请输入要查找的数（0-9）：\n");
	scanf("%d", &n);
	rank(arr, size, n);
	printf("%d\n",rank(arr, size, n));
	system("pause");
	return 0;
	
}