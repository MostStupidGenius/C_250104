#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// if�� �ǽ��ϱ�
	// score��� intŸ���� ���� ����
	int score;
	// �Է��� �ȳ��ϴ� ���� �߰�
	printf("0���� 100������ ���� �Է�: ");
	// scanf�� ���ؼ� %d�� �������� �Է¹޾�
	// &score�� �Է¹��� ���� ���
	scanf("%d", &score);
	// ��������1 : ����� ���ĺ��� scoreChar��� char������ �����Ͽ�
	char scoreChar = 'F';

	// score�� ��� ���� if���� ���� ������ ���� ���ĺ� ���
	// 90 �̻� 100 ���� A
	if (score >= 90/* && score <= 100*/) {
		printf("����� ������ A");
	}
	// 80 �̻� 90 �̸� B
	else if (score >= 80) { // && score < 90
		printf("����� ������ B");
	}
	// 70 �̻� 80 �̸� C
	else if (score >= 70) { // && score < 80
		printf("����� ������ C");
	}
	// 70 �̸� F ��������2: else �� ����
	else {
		printf("����� ������ F");
	}
	printf("\n\n");

	// �̶� �Է¹޴� ���� 0���� 100 ���̷� ����������
	// �Է¹޴´ٰ� �����Ѵ�.

	// if���� �̿��ؼ� scoreChar������ �ٲ۴�.
	if (score >= 90) {
		scoreChar = 'A';
	}
	else if (score >= 80) {
		scoreChar = 'B';
	}
	else if (score >= 70) {
		scoreChar = 'C';
	}
	// ���� ���ǽ��� ��� �������� ���� ���
	// �ʱⰪ�� 'F'�� scoreChar�� ��� ���� �״�� ���� ���̴�.
	// ���� else�� 'F'���ڸ� ���� �ʿ䰡 ��������.

	// if���� ��� �������� �ڿ� scoreChar�� ���ĺ� ���
	// �ϰ�ó��
	printf("����� ������ %c�Դϴ�.\n\n", scoreChar);

	scoreChar = 'A';
	if (score < 90) {
		scoreChar = (char)(scoreChar + 1);
	}
	if (score < 80) {
		scoreChar = (char)(scoreChar + 1);
	}
	if (score < 70) {
		scoreChar = (char)(scoreChar + 3);
	}
	printf("����� ������ %c�Դϴ�.\n", scoreChar);

	printf("���׿��� ����� ������ %c�Դϴ�.", (score >= 90 ? 'A' : (score >= 80 ? 'B' : (score >= 70 ? 'C' : 'F'))));

	return 0;
}