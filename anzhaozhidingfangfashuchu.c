#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 9

int main() {
	char arr[N] = { 0 };
	printf("请输入数组：\n");
	scanf("%s", arr);
	for (int i = 0; i < N; i++) {
		//如果输入的字符为小写字母
		if (arr[i] >= 'a'&&arr[i] <= 'z')
			//则加上32
			arr[i] = arr[i] + 32;
		else
			//如果输入小写字母
			if (arr[i] >= 'A'&&arr[i] <= 'Z')
				//则减去32
				arr[i] = arr[i] - 32;
	}
	printf("%s", arr);
	system("pause");
	return 0;
}