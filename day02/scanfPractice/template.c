#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() {
	// C��� �Է¹� scanf() �Լ�
	// scanf �Լ��� �⺻ ����
	// scanf("����������", &������);
	// &�� �ּ� �����ڶ�� �Ҹ���
	// �ڵ������ ������ �޸� �ּҸ� ����Ų��.
	// scanf�Լ��� �Է¹��� ���� �ش� �޸� �ּҿ�
	// ���� �����ϵ��� ���ش�.
	int num; // ������ ���� ����
	printf("���ڸ� �Է��ϼ���: ");

	// scanf�� ��ŷ�� �������� �ʱ� ������
	// vc++ �����Ϸ��� scanf ��ſ� scanf_s�� ��� ����ϰų�
	// #define _CRT_SECURE_NO_WARNINGS��
	// ���� �ֻ�ܿ� �����ؾ� �Ѵ�.
	scanf_s("%d", &num);
	
	// �Է� ����(buffer) ����
	while (getchar() != '\n');

	// �Է¹��� ���ڸ� ����غ���.
	printf("\n�Է��� ����: %d\n", num);

	return 0;
}