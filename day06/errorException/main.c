#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <errno.h> // ���� ��ȣ ���� ����� �����ϴ� ���

int main() 
{
	// ���� �б� ���� ��Ȳ ����
	printf("Error number1: %d\n", errno);
	FILE* fp = fopen("��������.txt", "r");
	printf("Error number2: %d\n", errno);

	// ���� ���� ���� �� ���� ó��
	if (fp == NULL) {
		// errno: ���� �ֱٿ� �߻��� ������ ��ȣ�� �����ϴ� ���� ����
		printf("Error number3: %d\n", errno);

		// perror(): errno�� �ش��ϴ� ���� �޽��� ���
		perror("���� �߻�");
		// ���� �߻� �� ���� ���� ���� ó���� ����
		// ���α׷��� ���������� �ʰ� �ڵ尡 ����Ǵ� ����
		// ���� �� �ִ�.
		return errno;
	}

	return 0;
}