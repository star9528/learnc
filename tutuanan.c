#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int  n = 1, m = 7;
	printf("���������������");
	scanf("%d", &m);
	//�������
		while (n <= m) {
			for (int i = 1; i < 2 * n; i++) {
				printf("*");
			}
			printf("\n");
			n++;
		}
		//�������
		n = m-1;
		while (n > 0) {
			for (int i = 2*n-1; i > 0; i--) {
				printf("*");
			}
			printf("\n");
			n--;
		}
		system("pause");
		return 0;
}