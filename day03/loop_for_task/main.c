#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// ������
	// 2�ܺ��� 9�ܱ���
	// ���� 1���� 9������ ���� ǥ���ϴ� ������ ���
	// ===2��===
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ...
	// 2 x 9 = 18
	// ===3��===
	// 3 x 1 = 3
	// 3 x 2 = 6
	// ...
	// 9 x 9 = 81
	int danMax, danMin, gopMax;
	printf("����ϰ� ���� ������ �� �Է�: ");
	scanf("%d %d %d", &danMin, &danMax, &gopMax);

	for (int dan = danMin; dan <= danMax; dan++) {
		printf("===%d��===\n", dan);
		for (int gop = 1; gop <= gopMax; gop++) {
			printf("%d x %d = %3d\n", dan, gop, dan * gop);
		}
	}
	return 0;
}