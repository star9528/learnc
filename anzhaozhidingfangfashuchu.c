#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 9

int main() {
	char arr[N] = { 0 };
	printf("���������飺\n");
	scanf("%s", arr);
	for (int i = 0; i < N; i++) {
		//���������ַ�ΪСд��ĸ
		if (arr[i] >= 'a'&&arr[i] <= 'z')
			//�����32
			arr[i] = arr[i] + 32;
		else
			//�������Сд��ĸ
			if (arr[i] >= 'A'&&arr[i] <= 'Z')
				//���ȥ32
				arr[i] = arr[i] - 32;
	}
	printf("%s", arr);
	system("pause");
	return 0;
}