#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// ���ڿ��� ������ �� ���� Ȯ���ϱ�
	char str1[] = "Hello";
	printf("%d\n", (int)(sizeof(str1)));
	//printf("%s", str1[5]); // %s�� �ϸ� (null) ���
	// %c�� �ϸ� ���ڿ� ���

	for (int i = 0; i < 6; i++) {
		printf("%c\n", str1[i]);
	}
	return 0;
}