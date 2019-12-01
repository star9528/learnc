#define  _CRT_NONSTDC_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void paixu (int a[], int n){
	int i, j, temp;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			if (a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				}
}
int main(void) {
	int	arr[] = { 5, 3, 4 };
	printf("«Î ‰»Î ˝æ›");
	scanf("%d", *arr);
	int i,n=3;
	paixu(arr, n);
	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);
	system("pause");
	return 0;
}