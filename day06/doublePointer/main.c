#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// ���� ������
	// ������ ����(*ptr)�� ����Ű�� ������

	// �Ϲ� ����
	int num = 3;
	// ������ ����
	// & �����ڸ� �̿��ؼ� �ּҰ� ����
	int* nptr = &num;

	// ���� ������
	// & ������
	int** dptr = &nptr;

	// num�� ���� �����Ϸ���
	// ��������������*�� �ι� ����ؾ� ������ �����ϴ�.
	int extractValue = **dptr;
	printf("num = %d\n", extractValue);

	return 0;
}