#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// 2���� �迭(���) ����
	// �� ���� 2x3 ��� ���� �� �ʱ�ȭ
	int A[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int B[2][3] = { {7, 8, 9}, {10, 11, 12} };
	// ����� ������ �迭 ����
	int result[2][3];

	// ��� ���� ����
	// �ܺ� �迭�� ���̸�ŭ �ݺ�
	for (int i = 0; i < 2; i++) {
		// ���� �迭�� ���̸�ŭ �ݺ�
		for (int j = 0; j < 3; j++) {
			result[i][j] = A[i][j] + B[i][j];
		}
	}

	// ��� ��� ���
	for (int i = 0; i < 2; i++) {
		// ���� �迭�� ���̸�ŭ �ݺ�
		for (int j = 0; j < 3; j++) {
			// i�� j���� ���� ���
			printf("%d ", result[i][j]);
		}
		printf("\n"); // ���� ���� ������ �ٹٲ�
	}


	return 0;
}