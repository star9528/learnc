#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char arr[] = { "1234" };
	char arr1[] = { "0" };
	//������������
	for (int i = 1; i < 4; i++) {
		printf("���������룺\n");
		scanf("%s", arr1);
		if (strcmp(arr,arr1)==0) {
			printf("������ȷ��");
			break;
		}
		else printf("����������������룡\n");
	}
	system("pause");
	return 0;
}