#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ch;
	printf("����������\n");
	while ((ch = getchar()) != EOF) {
		//���������ַ�ΪСд��ĸ
		if (ch >= 'a'&&ch <= 'z')
			//�����32
			printf("%c", ch - 32);
		else
			//�������Сд��ĸ
			if (ch >= 'A'&&ch <= 'Z')
				//���ȥ32
				printf("%c", ch + 32);
			else
				//����0-9�����
				if (ch >= 0 && ch <= 9)
					;
		//�����ַ�Ҳ�����
				else
					;
	}
	system("pause");
	return 0;
}