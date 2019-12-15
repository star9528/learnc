#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ch;
	printf("请输入数：\n");
	while ((ch = getchar()) != EOF) {
		//如果输入的字符为小写字母
		if (ch >= 'a'&&ch <= 'z')
			//则加上32
			printf("%c", ch - 32);
		else
			//如果输入小写字母
			if (ch >= 'A'&&ch <= 'Z')
				//则减去32
				printf("%c", ch + 32);
			else
				//输入0-9则不输出
				if (ch >= 0 && ch <= 9)
					;
		//其他字符也不输出
				else
					;
	}
	system("pause");
	return 0;
}