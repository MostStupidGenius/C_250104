#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// for�� �ǽ�
	// ������ �� 2���� ������ ����ϴ� for�� �ۼ��ϱ�
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ...
	// 2 x 9 = 18
	for (int i = 1; i < 10;i++) {
		//printf("%d", i);
		printf("%d x %d = %d\n", 2, i, 2*i);
	}

	return 0;
}