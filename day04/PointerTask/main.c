#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

int main() 
{
	// ������ �ǽ�
	// &[�Ϲݺ�����]�� ���� �ش� ������ �޸� �ּҰ��� �����Ѵٴ� �ǹ��̴�.
	// *[����������]�� ���� ������ ��� �޸� �ּҰ��� ���� �����Ѵٴ� �ǹ��̴�.
	//
	// �ǽ�1.
	// ������ ���� num1�� 10�� �־� ���� �� �ʱ�ȭ
	int num1 = 10;
	// ������ ���� ���� ptrNum1�� num1�� �޸� �ּҸ� �־� ���� �� �ʱ�ȭ
	int* ptrNum1 = &num1;
	// ptrNum1�� ���� �����Ͽ� += �����ڷ� 15�� �߰��Ѵ�.
	*ptrNum1 += 15;
	// printf�� �̿��Ͽ� num1�� ���� Ȯ���Ѵ�.
	printf("num1 == %d\n", num1);
	// printf�� �̿��Ͽ� ptrNum1�� ���� ���� �����ڸ� ����Ͽ� ���� Ȯ���Ѵ�.
	printf("*ptrNum1 == %d\n", *ptrNum1);
	// + num1�� ���� ptrNum1�� ���� ���� �����ڸ� ����� ���� ��(==)�� ����� ���(1 / 0)
	printf("num1 == *ptrNum1 => %d\n", num1 == *ptrNum1);

	// �� ������ �ּҰ��� ��
	printf("&num1 == ptrNum1 => %d\n", &num1 == ptrNum1);

	printf("&num1 == %p\n", &num1);
	printf("ptrNum1 == %p\n", ptrNum1);

	printf("&num1 == %p\n", &*&num1);

	return 0;
}