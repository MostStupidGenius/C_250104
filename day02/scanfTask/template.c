# include <stdio.h>

int main() {
	// �ǽ�1
	// �簢���� ���ο� ���� ���̸� �Է¹޾�
	// �״�� ����ϴ� ���α׷� �ۼ�
	int width, height;

	printf("�����Է�: ");
	scanf_s("%d", &width);
	printf("�����Է�: ");
	scanf_s("%d", &height);

	// ���� ������ ���� �޴� ���
	//scanf_s("%d %d", &width, &height);

	// ���
	printf("����: %d\n����: %d", width, height);
	return 0;
}